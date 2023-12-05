#include "./face_landmarker.h"

#include "mediapipe/tasks/cc/vision/face_landmarker/face_landmarker.h"
#include "mediapipe/tasks/cc/vision/utils/image_utils.h"

namespace mediapipe::tasks::vision::face_landmarker {

namespace {

using ::mediapipe::tasks::vision::CreateImageFromBuffer;
using ::mediapipe::tasks::vision::core::RunningMode;

int CppProcessError(absl::Status status, char** error_msg) {
    if (error_msg) {
        *error_msg = strdup(status.ToString().c_str());
    }
    return status.raw_code();
}

}

MpFaceLandmarker* CppFaceLandmarkerCreate(struct MpFaceLandmarkerOptions* options, char** error_msg)
{
    std::unique_ptr<FaceLandmarkerOptions> cpp_options = std::make_unique<FaceLandmarkerOptions>();
    cpp_options->base_options.model_asset_path = std::string(options->model_asset_path);
    cpp_options->running_mode = RunningMode::LIVE_STREAM;
    cpp_options->num_faces = 1;
    cpp_options->min_face_detection_confidence = options->min_face_detection_confidence;
    cpp_options->min_face_presence_confidence = options->min_face_presence_confidence;
    cpp_options->min_tracking_confidence = options->min_tracking_confidence;
    cpp_options->output_face_blendshapes = options->output_face_blendshapes;
    cpp_options->output_facial_transformation_matrixes = options->output_facial_transformation_matrixes;

    MpFaceLandmarkerOptions::result_callback_fn result_callback = options->result_callback;
    cpp_options->result_callback = [result_callback](
        absl::StatusOr<FaceLandmarkerResult> cpp_result,
        const Image& image,
        int64_t timestamp_ms
    ) {
        char* error_msg = nullptr;
        if (!cpp_result.ok()) {
            ABSL_LOG(ERROR) << "Detect landmark failed: " << cpp_result.status();
            CppProcessError(cpp_result.status(), &error_msg);
            result_callback(nullptr, MpImage(), timestamp_ms, error_msg);
            free(error_msg);
            return;
        }

        struct MpFaceLandmarkerResult mp_result;
        mp_result.face_landmark = nullptr;
        mp_result.face_landmark_count = 0;
        mp_result.face_blendshape = nullptr;
        mp_result.face_blendshape_count = 0;

        if (cpp_result->face_landmarks.size() > 0 &&
            cpp_result->face_blendshapes.has_value() &&
            cpp_result->face_blendshapes->size() > 0
        ) {
            auto landmarks = cpp_result->face_landmarks[0].landmarks;
            auto blendshapes = cpp_result->face_blendshapes->at(0).categories;

            mp_result.face_landmark_count = landmarks.size();
            mp_result.face_landmark = new struct MpNormalizedLandmark[mp_result.face_landmark_count];
            for (int i = 0; i < mp_result.face_landmark_count; i++) {
                mp_result.face_landmark[i].x = landmarks[i].x;
                mp_result.face_landmark[i].y = landmarks[i].y;
                mp_result.face_landmark[i].z = landmarks[i].z;
            }

            mp_result.face_blendshape_count = blendshapes.size();
            mp_result.face_blendshape = new float[mp_result.face_blendshape_count + 1];
            for (int i = 0; i < mp_result.face_blendshape_count; i++) {
                auto blendshape = blendshapes[i];
                mp_result.face_blendshape[blendshape.index] = blendshape.score;
            }
        }

        struct MpImage mp_image;
        mp_image.format = UNKNOWN;
        mp_image.image_buffer = nullptr;
        mp_image.width = image.width();
        mp_image.height = image.height();
        result_callback(&mp_result, mp_image, timestamp_ms, nullptr);
    };

    auto landmarker = FaceLandmarker::Create(std::move(cpp_options));
    if (!landmarker.ok()) {
        ABSL_LOG(ERROR) << "Failed to create FaceLandmarker: "
                        << landmarker.status();
        CppProcessError(landmarker.status(), error_msg);
        return nullptr;
    }

    return reinterpret_cast<MpFaceLandmarker*>(landmarker->release());
}

int CppFaceLandmarkerDetect(MpFaceLandmarker* landmarker, MpImage image, int64_t timestamp_ms, char** error_msg)
{
    const auto img = CreateImageFromBuffer(
        static_cast<ImageFormat::Format>(image.format),
        image.image_buffer, image.width,
        image.height);

    if (!img.ok()) {
        ABSL_LOG(ERROR) << "Failed to create Image: " << img.status();
        return CppProcessError(img.status(), error_msg);
    }

    auto cpp_landmarker = reinterpret_cast<FaceLandmarker*>(landmarker);
    auto cpp_result = cpp_landmarker->DetectAsync(*img, timestamp_ms);
    if (!cpp_result.ok()) {
        ABSL_LOG(ERROR) << "Data preparation for the image landmarker failed: "
                        << cpp_result;

        return CppProcessError(cpp_result, error_msg);
    }
    return 0;
}

int CppFaceLandmarkerClose(MpFaceLandmarker* landmarker, char** error_msg) {
    auto cpp_landmarker = reinterpret_cast<FaceLandmarker*>(landmarker);
    auto result = cpp_landmarker->Close();
    if (!result.ok()) {
        ABSL_LOG(ERROR) << "Failed to close FaceLandmarker: " << result;
        return CppProcessError(result, error_msg);
    }
    delete cpp_landmarker;
    return 0;
}

}

extern "C" {

MpFaceLandmarker* mp_face_landmarker_create(struct MpFaceLandmarkerOptions* options, char** error_msg) {
    return mediapipe::tasks::vision::face_landmarker::CppFaceLandmarkerCreate(options, error_msg);
}

int mp_face_landmarker_detect(MpFaceLandmarker* landmarker, MpImage image, int64_t timestamp_ms, char** error_msg) {
    return mediapipe::tasks::vision::face_landmarker::CppFaceLandmarkerDetect(landmarker, image, timestamp_ms, error_msg);
}

int mp_face_landmarker_close(MpFaceLandmarker* landmarker, char** error_msg) {
    return mediapipe::tasks::vision::face_landmarker::CppFaceLandmarkerClose(landmarker, error_msg);
}

void mp_free_string(char* str) {
    free(str);
}

}

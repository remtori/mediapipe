#pragma once

#include <cstdint>

#ifndef MP_EXPORT
#define MP_EXPORT __attribute__((visibility("default")))
#endif  // MP_EXPORT

#ifdef __cplusplus
extern "C" {
#endif

// Supported image formats.
enum MpImageFormat {
	UNKNOWN = 0,
	SRGB = 1,
	SRGBA = 2,
	GRAY8 = 3,
	SBGRA = 11  // compatible with Flutter `bgra8888` format.
};

struct MpImage {
	enum MpImageFormat format;
	const uint8_t* image_buffer;
	int width;
	int height;
};

struct MpNormalizedLandmark {
	float x;
	float y;
	float z;
};

struct MpFaceLandmarkerResult {
	struct MpNormalizedLandmark* face_landmark;
	uint32_t face_landmark_count;
	float* face_blendshape;
	uint32_t face_blendshape_count;
};

struct MpFaceLandmarkerOptions {
    // The path to the model asset to open and mmap in memory.
    const char* model_asset_path;

    // The minimum confidence score for the face detection to be considered
    // successful.
    float min_face_detection_confidence;

    // The minimum confidence score of face presence score in the face landmark
    // detection.
    float min_face_presence_confidence;

    // The minimum confidence score for the face tracking to be considered
    // successful.
    float min_tracking_confidence;

    // Whether FaceLandmarker outputs face blendshapes classification. Face
    // blendshapes are used for rendering the 3D face model.
    bool output_face_blendshapes;

    // Whether FaceLandmarker outputs facial transformation_matrix. Facial
    // transformation matrix is used to transform the face landmarks in canonical
    // face to the detected face, so that users can apply face effects on the
    // detected landmarks.
    bool output_facial_transformation_matrixes;

    // The user-defined result callback for processing live stream data.
	typedef void (*result_callback_fn)(MpFaceLandmarkerResult* result,
                                     const MpImage image, int64_t timestamp_ms,
                                     char* error_msg);
	result_callback_fn result_callback;
};

typedef struct MpFaceLandmarker MpFaceLandmarker;

// Creates a FaceLandmarker from a FaceLandmarkerOptions to process image data
// or streaming data.
// 	  Live stream mode for detecting face landmarks on the live stream of the
//    input data, such as from camera. Users call `DetectAsync` to push the
//    image data into the FaceLandmarker, the detected results along with the
//    input timestamp and the image that face landmarker runs on will be
//    available in the result callback when the face landmarker finishes the
//    work.
MP_EXPORT MpFaceLandmarker* mp_face_landmarker_create(struct MpFaceLandmarkerOptions* options, char** error_msg);

// Sends live image data to perform face landmarks detection, and the results
// will be available via the "result_callback" provided in the
// FaceLandmarkerOptions. Only use this method when the FaceLandmarker
// is created with the live stream running mode.
//
// The image can be of any size with format RGB or RGBA. It's required to
// provide a timestamp (in milliseconds) to indicate when the input image is
// sent to the face landmarker. The input timestamps must be monotonically
// increasing.
//
// The "result_callback" provides
//   - A vector of FaceLandmarkerResult, each is the detected results
//     for a input frame.
//   - The const reference to the corresponding input image that the face
//     landmarker runs on. Note that the const reference to the image will no
//     longer be valid when the callback returns. To access the image data
//     outside of the callback, callers need to make a copy of the image.
//   - The input timestamp in milliseconds.
//
// If an error occurs, returns an error code and sets the error parameter to an
// an error message (if `error_msg` is not `nullptr`). You must free the memory
// allocated for the error message.
MP_EXPORT int mp_face_landmarker_detect(MpFaceLandmarker* landmarker, MpImage image, int64_t timestamp_ms, char** error_msg);

// Frees face landmarker.
// If an error occurs, returns an error code and sets the error parameter to an
// an error message (if `error_msg` is not `nullptr`). You must free the memory
// allocated for the error message.
MP_EXPORT int mp_face_landmarker_close(MpFaceLandmarker* landmarker, char** error_msg);

MP_EXPORT void mp_free_string(char* str);

MP_EXPORT void mp_initialize();

#ifdef __cplusplus
}  // extern C
#endif

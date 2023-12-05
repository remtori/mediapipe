#include "mediapipe/framework/deps/registration_token.h"
#include "mediapipe/calculators/core/clip_vector_size_calculator.h"
#include "mediapipe/calculators/util/collection_has_min_size_calculator.h"
#include "mediapipe/tasks/cc/components/containers/detection_result.h"
#include "mediapipe/framework/formats/rect.pb.h"

namespace mediapipe
{
    // class FlowLimiterCalculator;
    static ::mediapipe::RegistrationToken* calculator_registration_265__;
    // class GateCalculator;
    static ::mediapipe::RegistrationToken* calculator_registration_235__;
    // class AssociationNormRectCalculator;
    static ::mediapipe::RegistrationToken* calculator_registration_69__;

    // using ClipNormalizedRectVectorSizeCalculator = ClipVectorSizeCalculator<::mediapipe::NormalizedRect>;
    static ::mediapipe::RegistrationToken* calculator_registration_27__;
    // using ClipDetectionVectorSizeCalculator = ClipVectorSizeCalculator<::mediapipe::Detection>;
    static ::mediapipe::RegistrationToken* calculator_registration_31__;
    // using NormalizedRectVectorHasMinSizeCalculator = CollectionHasMinSizeCalculator<std::vector<mediapipe::NormalizedRect>>;
    static ::mediapipe::RegistrationToken* calculator_registration_28__;

    namespace tasks
    {
        namespace vision
        {
            namespace face_landmarker
            {
                // class FaceLandmarkerGraph;
                static ::mediapipe::RegistrationToken* subgraph_registration_563__;
                // class MultiFaceLandmarksDetectorGraph;
                static ::mediapipe::RegistrationToken* subgraph_registration_664__;
                // class SingleFaceLandmarksDetectorGraph;
                static ::mediapipe::RegistrationToken* subgraph_registration_379__;
            }

            namespace face_detector
            {
                // class FaceDetectorGraph;
                static ::mediapipe::RegistrationToken* subgraph_registration_343__;
            }
        }
    }

    namespace api2
    {
        // class PreviousLoopbackCalculator;
        static ::mediapipe::RegistrationToken* calculator_registration_177__;

        // class ImagePropertiesCalculator;
        static ::mediapipe::RegistrationToken* calculator_registration_109__;
    }
}

static void CppInitClass()
{
    ABSL_LOG(WARNING)
        << "CppInitClass: "
        << "FlowLimiterCalculator " << mediapipe::calculator_registration_265__ << "\n"
        << "GateCalculator " << mediapipe::calculator_registration_235__ << "\n"
        << "AssociationNormRectCalculator " << mediapipe::calculator_registration_69__ << "\n"
        << "ClipNormalizedRectVectorSizeCalculator " << mediapipe::calculator_registration_27__ << "\n"
        << "ClipDetectionVectorSizeCalculator " << mediapipe::calculator_registration_31__ << "\n"
        << "NormalizedRectVectorHasMinSizeCalculator " << mediapipe::calculator_registration_28__ << "\n"
        << "FaceLandmarkerGraph " << mediapipe::tasks::vision::face_landmarker::subgraph_registration_563__ << "\n"
        << "MultiFaceLandmarksDetectorGraph " << mediapipe::tasks::vision::face_landmarker::subgraph_registration_664__ << "\n"
        << "SingleFaceLandmarksDetectorGraph " << mediapipe::tasks::vision::face_landmarker::subgraph_registration_379__ << "\n"
        << "FaceDetectorGraph " << mediapipe::tasks::vision::face_detector::subgraph_registration_343__ << "\n"
        << "PreviousLoopbackCalculator " << mediapipe::api2::calculator_registration_177__ << "\n"
        << "ImagePropertiesCalculator " << mediapipe::api2::calculator_registration_109__;
}

extern "C"
{

    void mp_initialize()
    {
        CppInitClass();
    }
}
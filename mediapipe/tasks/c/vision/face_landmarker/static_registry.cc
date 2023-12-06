#include "mediapipe/framework/deps/registration_token.h"

#include "absl/log/absl_log.h"

namespace mediapipe
{
    // InOrderOutputStreamHandler
    extern ::mediapipe::RegistrationToken *output_handler_registration_24____MP_FILE;

    // ImmediateInputStreamHandler
    extern ::mediapipe::RegistrationToken *input_handler_registration_35____MP_FILE;
    // DefaultInputStreamHandler
    extern ::mediapipe::RegistrationToken *input_handler_registration_24____MP_FILE;

    // FlowLimiterCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_265____MP_FILE;
    // GateCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_235____MP_FILE;
    // AssociationNormRectCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_69__anrc;
    // PassThroughCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_96__ptc;
    // SsdAnchorsCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_198____MP_FILE;
    // NonMaxSuppressionCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_384____MP_FILE;
    // DetectionProjectionCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_58____MP_FILE;
    // DetectionsToRectsCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_339____MP_FILE;
    // RectTransformationCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_76__rtc;
    // BeginLoopNormalizedRectCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_42__blc;
    // EndLoopBooleanCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_48____MP_FILE;
    // EndLoopFloatCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_51____MP_FILE;
    // EndLoopNormalizedLandmarkListVectorCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_45____MP_FILE;
    // EndLoopNormalizedRectCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_37____MP_FILE;
    // ConcatenateNormalizedLandmarkListVectorCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_87__cvc;
    // BeginLoopNormalizedLandmarkListVectorCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_33__blc;
    // EndLoopClassificationListCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_59____MP_FILE;

    // SplitTensorVectorCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_53____MP_FILE;
    // SplitNormalizedLandmarkListCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_183__splc;
    // ThresholdingCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_67__thc;
    // LandmarkLetterboxRemovalCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_140____MP_FILE;
    // LandmarkProjectionCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_232____MP_FILE;
    // LandmarksToDetectionCalculator
    extern ::mediapipe::RegistrationToken *calculator_registration_91__lmtdc;

    // using ClipNormalizedRectVectorSizeCalculator = ClipVectorSizeCalculator<::mediapipe::NormalizedRect>;
    extern ::mediapipe::RegistrationToken *calculator_registration_27____MP_FILE;
    // using ClipDetectionVectorSizeCalculator = ClipVectorSizeCalculator<::mediapipe::Detection>;
    extern ::mediapipe::RegistrationToken *calculator_registration_31____MP_FILE;
    // using NormalizedRectVectorHasMinSizeCalculator = CollectionHasMinSizeCalculator<std::vector<mediapipe::NormalizedRect>>;
    extern ::mediapipe::RegistrationToken *calculator_registration_28____MP_FILE;

    namespace tasks
    {
        namespace core
        {
            // ModelResourcesCalculator
            extern ::mediapipe::RegistrationToken *calculator_registration_132____MP_FILE;
        }

        namespace vision
        {
            namespace face_landmarker
            {
                // FaceLandmarkerGraph;
                extern ::mediapipe::RegistrationToken *subgraph_registration_563____MP_FILE;
                // FaceBlendshapesGraph
                extern ::mediapipe::RegistrationToken *subgraph_registration_320____MP_FILE;
                // TensorsToFaceLandmarksGraph
                extern ::mediapipe::RegistrationToken *subgraph_registration_255____MP_FILE;

                // MultiFaceLandmarksDetectorGraph;
                extern ::mediapipe::RegistrationToken *subgraph_registration_663____MP_FILE;
                // SingleFaceLandmarksDetectorGraph;
                extern ::mediapipe::RegistrationToken *subgraph_registration_379____MP_FILE;
            }

            namespace face_detector
            {
                // FaceDetectorGraph;
                extern ::mediapipe::RegistrationToken *subgraph_registration_343____MP_FILE;
            }
        }
    }

    namespace api2
    {
        // LandmarksSmoothingCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_114____MP_FILE;

        // InferenceCalculator TODO
        extern const char* _mp_inference_calculator_register_cpu;
        extern const char* _mp_inference_calculator_register_gl_advanced;
        extern const char* _mp_inference_calculator_register_gl;
        extern const char* _mp_inference_calculator_register_metal;
        extern const char* _mp_inference_calculator_register_xnnpack;
        extern const char* _mp_inference_calculator_register_selector;

        // GetNormalizedLandmarkListVectorItemCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_31__gvic;
        // LandmarksToTensorCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_157____MP_FILE;
        // TensorsToClassificationCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_104____MP_FILE;
        // TensorsToDetectionsCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_264____MP_FILE;
        // TensorsToLandmarksCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_111____MP_FILE;
        // PreviousLoopbackCalculator;
        extern ::mediapipe::RegistrationToken *calculator_registration_177____MP_FILE;
        // ImagePropertiesCalculator;
        extern ::mediapipe::RegistrationToken *calculator_registration_109____MP_FILE;
        // ImageCloneCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_126____MP_FILE;
        // TensorsToFloatsCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_63____MP_FILE;
        // ImageToTensorCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_306____MP_FILE;
        // DetectionTransformationCalculator
        extern ::mediapipe::RegistrationToken *calculator_registration_327__dtc;
    }
}

static void CppInitClass()
{
    ABSL_LOG(WARNING)
        << "CppInitClass: \n"
        << "  InOrderOutputStreamHandler: " << mediapipe::output_handler_registration_24____MP_FILE << "\n"
        << "  ImmediateInputStreamHandler: " << mediapipe::input_handler_registration_35____MP_FILE << "\n"
        << "  DefaultInputStreamHandler: " << mediapipe::input_handler_registration_24____MP_FILE << "\n"
        << "  FlowLimiterCalculator: " << mediapipe::calculator_registration_265____MP_FILE << "\n"
        << "  GateCalculator: " << mediapipe::calculator_registration_235____MP_FILE << "\n"
        << "  AssociationNormRectCalculator: " << mediapipe::calculator_registration_69__anrc << "\n"
        << "  PassThroughCalculator: " << mediapipe::calculator_registration_96__ptc << "\n"
        << "  SsdAnchorsCalculator: " << mediapipe::calculator_registration_198____MP_FILE << "\n"
        << "  NonMaxSuppressionCalculator: " << mediapipe::calculator_registration_384____MP_FILE << "\n"
        << "  DetectionProjectionCalculator: " << mediapipe::calculator_registration_58____MP_FILE << "\n"
        << "  DetectionsToRectsCalculator: " << mediapipe::calculator_registration_339____MP_FILE << "\n"
        << "  RectTransformationCalculator: " << mediapipe::calculator_registration_76__rtc << "\n"
        << "  BeginLoopNormalizedRectCalculator: " << mediapipe::calculator_registration_42__blc << "\n"
        << "  EndLoopBooleanCalculator: " << mediapipe::calculator_registration_48____MP_FILE << "\n"
        << "  EndLoopFloatCalculator: " << mediapipe::calculator_registration_51____MP_FILE << "\n"
        << "  EndLoopNormalizedLandmarkListVectorCalculator: " << mediapipe::calculator_registration_45____MP_FILE << "\n"
        << "  EndLoopNormalizedRectCalculator: " << mediapipe::calculator_registration_37____MP_FILE << "\n"
        << "  ConcatenateNormalizedLandmarkListVectorCalculator: " << mediapipe::calculator_registration_87__cvc << "\n"
        << "  BeginLoopNormalizedLandmarkListVectorCalculator: " << mediapipe::calculator_registration_33__blc << "\n"
        << "  EndLoopClassificationListCalculator: " << mediapipe::calculator_registration_59____MP_FILE << "\n"
        << "  SplitTensorVectorCalculator: " << mediapipe::calculator_registration_53____MP_FILE << "\n"
        << "  SplitNormalizedLandmarkListCalculator: " << mediapipe::calculator_registration_183__splc << "\n"
        << "  ThresholdingCalculator: " << mediapipe::calculator_registration_67__thc << "\n"
        << "  LandmarkLetterboxRemovalCalculator: " << mediapipe::calculator_registration_140____MP_FILE << "\n"
        << "  LandmarkProjectionCalculator: " << mediapipe::calculator_registration_232____MP_FILE << "\n"
        << "  LandmarksToDetectionCalculator: " << mediapipe::calculator_registration_91__lmtdc << "\n"
        << "  ClipNormalizedRectVectorSizeCalculator: " << mediapipe::calculator_registration_27____MP_FILE << "\n"
        << "  ClipDetectionVectorSizeCalculator: " << mediapipe::calculator_registration_31____MP_FILE << "\n"
        << "  NormalizedRectVectorHasMinSizeCalculator: " << mediapipe::calculator_registration_28____MP_FILE << "\n"
        << "  ModelResourcesCalculator: " << mediapipe::tasks::core::calculator_registration_132____MP_FILE << "\n"
        << "  FaceLandmarkerGraph: " << mediapipe::tasks::vision::face_landmarker::subgraph_registration_563____MP_FILE << "\n"
        << "  FaceBlendshapesGraph: " << mediapipe::tasks::vision::face_landmarker::subgraph_registration_320____MP_FILE << "\n"
        << "  TensorsToFaceLandmarksGraph: " << mediapipe::tasks::vision::face_landmarker::subgraph_registration_255____MP_FILE << "\n"
        << "  MultiFaceLandmarksDetectorGraph: " << mediapipe::tasks::vision::face_landmarker::subgraph_registration_663____MP_FILE << "\n"
        << "  SingleFaceLandmarksDetectorGraph: " << mediapipe::tasks::vision::face_landmarker::subgraph_registration_379____MP_FILE << "\n"
        << "  FaceDetectorGraph: " << mediapipe::tasks::vision::face_detector::subgraph_registration_343____MP_FILE << "\n"
        << "  LandmarksSmoothingCalculator: " << mediapipe::api2::calculator_registration_114____MP_FILE << "\n"
        << "  TensorsToDetectionsCalculator: " << mediapipe::api2::calculator_registration_264____MP_FILE << "\n"
        << "  GetNormalizedLandmarkListVectorItemCalculator: " << mediapipe::api2::calculator_registration_31__gvic << "\n"
        << "  LandmarksToTensorCalculator: " << mediapipe::api2::calculator_registration_157____MP_FILE << "\n"
        << "  TensorsToClassificationCalculator: " << mediapipe::api2::calculator_registration_104____MP_FILE << "\n"
        << "  TensorsToLandmarksCalculator: " << mediapipe::api2::calculator_registration_111____MP_FILE << "\n"
        << "  PreviousLoopbackCalculator: " << mediapipe::api2::calculator_registration_177____MP_FILE << "\n"
        << "  ImagePropertiesCalculator: " << mediapipe::api2::calculator_registration_109____MP_FILE << "\n"
        << "  ImageCloneCalculator: " << mediapipe::api2::calculator_registration_126____MP_FILE << "\n"
        << "  TensorsToFloatsCalculator: " << mediapipe::api2::calculator_registration_63____MP_FILE << "\n"
        << "  ImageToTensorCalculator: " << mediapipe::api2::calculator_registration_306____MP_FILE << "\n"
        << "  DetectionTransformationCalculator: " << mediapipe::api2::calculator_registration_327__dtc << "\n"
        << "  InferenceCalculator: "
            << mediapipe::api2::_mp_inference_calculator_register_cpu << ','
            // << mediapipe::api2::_mp_inference_calculator_register_gl_advanced << ','
            // << mediapipe::api2::_mp_inference_calculator_register_gl << ','
            // << mediapipe::api2::_mp_inference_calculator_register_xnnpack << ','
            << mediapipe::api2::_mp_inference_calculator_register_metal << ','
            << mediapipe::api2::_mp_inference_calculator_register_selector << "\n"
        ;
}

extern "C"
{

    void mp_initialize()
    {
        CppInitClass();
    }
}
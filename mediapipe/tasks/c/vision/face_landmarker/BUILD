# Copyright 2023 The MediaPipe Authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

package(default_visibility = ["//mediapipe/tasks:internal"])

licenses(["notice"])

cc_library(
    name = "face_landmarker",
    srcs = [
        "face_landmarker.cc",
        "static_registry.cc"
    ],
    hdrs = ["face_landmarker.h"],
    visibility = ["//visibility:public"],
    deps = [
        "//mediapipe/framework/formats:image",
        "//mediapipe/framework/formats:image_frame",
        "//mediapipe/tasks/cc/vision/core:running_mode",
        "//mediapipe/tasks/cc/vision/face_landmarker",
        "//mediapipe/tasks/cc/vision/utils:image_utils",
        "//mediapipe/tasks/cc/components/containers:detection_result",
        "@com_google_absl//absl/log:absl_log",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/status:statusor",
    ],
    alwayslink = 1,
)

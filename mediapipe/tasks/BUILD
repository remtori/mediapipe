# Copyright 2022 The MediaPipe Authors.
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

load("//mediapipe/framework/tool:cc_static_library.bzl", "cc_static_library")
load("@build_bazel_rules_apple//apple:apple_static_library.bzl", "apple_static_library")

package(default_visibility = ["//visibility:public"])

package_group(
    name = "internal",
    packages = [
        "//mediapipe/python/...",
        "//mediapipe/tasks/...",
    ],
)

package_group(
    name = "users",
    includes = [
        ":internal",
    ],
)

apple_static_library(
    name = "ios_face_landmarker",
    deps = [
        "//mediapipe/tasks/c/vision/face_landmarker:face_landmarker"
    ],
    platform_type = "ios",
    minimum_os_version = "12.0",
)

cc_static_library(
    name = "android_face_landmarker",
    deps = [
        "//mediapipe/tasks/c/vision/face_landmarker:face_landmarker"
    ],
)

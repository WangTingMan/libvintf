/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_VINTF_LEVEL_H
#define ANDROID_VINTF_LEVEL_H

#include <stddef.h>
#include <stdint.h>

#include <vintf/libvintf_exports.h>

namespace android {
namespace vintf {

// Manifest and Compatibility Matrix Level, a.k.a FCM Version, is a number assigned to each
// manifest / matrix.
// - For manifest, the FCM Version that it implements
// - For matrix, the single FCM Version that this matrix file details.
// This is not a strong-typed enum because Level can be any integer value. Listed are some
// special values.
enum Level : size_t {
    // Non-Treble devices.
    LEGACY = 0,
    // Actual values starts from 1.
    O = 1,
    O_MR1 = 2,
    P = 3,
    Q = 4,
    R = 5,
    S = 6,
    T = 7,
    U = 8,
    V = 9,
    // To add new values: (1) add above this line.  (2) edit if needed:
    // - RuntimeInfo::gkiAndroidReleaseToLevel
    // - analyze_matrix.cpp, GetDescription()

    // The maximum of all specified Levels + 1.
    LAST_PLUS_ONE,

    // For older manifests and compatibility matrices, "level" is not specified.
    UNSPECIFIED = SIZE_MAX,
};

LIBVINTF_API std::string GetDescription(Level level);

}  // namespace vintf
}  // namespace android

#endif  // ANDROID_VINTF_LEVEL_H

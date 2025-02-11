/*
 * Copyright (C) 2022 The Android Open Source Project
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

#pragma once

#include "FileSystem.h"
#include "PropertyFetcher.h"

#include <optional>
#include <string>
#include <vector>

<<<<<<< HEAD
#include <vintf/libvintf_exports.h>

namespace android {
namespace vintf {
=======
namespace android::vintf::apex {
>>>>>>> 648a4af

std::optional<timespec> GetModifiedTime(FileSystem* fileSystem, PropertyFetcher* propertyFetcher);
status_t GetDeviceVintfDirs(FileSystem* fileSystem, PropertyFetcher* propertyFetcher,
                            std::vector<std::string>* out, std::string* error);
status_t GetFrameworkVintfDirs(FileSystem* fileSystem, PropertyFetcher* propertyFetcher,
                               std::vector<std::string>* out, std::string* error);

<<<<<<< HEAD
namespace details {

// Provide default implementation for ApexInterface
class LIBVINTF_API Apex : public ApexInterface {
   public:
    Apex() = default;
    bool HasUpdate(FileSystem* fileSystem, PropertyFetcher* propertyFetcher) const override;
    status_t DeviceVintfDirs(FileSystem* fileSystem, PropertyFetcher* propertyFetcher,
                             std::vector<std::string>* out, std::string* error) override;

   private:
    std::optional<int64_t> mtime_;
};

}  // namespace details
}  // namespace vintf
}  // namespace android
=======
}  // namespace android::vintf::apex
>>>>>>> 648a4af

// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

namespace netconf {

class IIPConfiguration {
 public:

  virtual Error Configure(IPConfigs const& config) const = 0;

 private:
};


}  // namespace netconf


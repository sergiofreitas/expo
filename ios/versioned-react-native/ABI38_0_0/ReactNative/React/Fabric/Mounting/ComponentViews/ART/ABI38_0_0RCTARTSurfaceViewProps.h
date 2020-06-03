/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <ABI38_0_0React/components/view/ViewProps.h>

namespace ABI38_0_0facebook {
namespace ABI38_0_0React {

class ABI38_0_0RCTARTSurfaceViewProps final : public ViewProps {
 public:
  ABI38_0_0RCTARTSurfaceViewProps() = default;
  ABI38_0_0RCTARTSurfaceViewProps(
      const ABI38_0_0RCTARTSurfaceViewProps &sourceProps,
      const RawProps &rawProps);

#pragma mark - Props
};

} // namespace ABI38_0_0React
} // namespace ABI38_0_0facebook

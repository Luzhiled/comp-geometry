#pragma once

#include "src/real-geometry/common/size-alias.hpp"

namespace geometry {

  inline usize next_idx(usize idx, usize size) {
    return idx + 1 == size ? 0 : idx + 1;
  }

}

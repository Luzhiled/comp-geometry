#pragma once

#include "src/real-geometry/common/size-alias.hpp"

namespace geometry {

  inline usize prev_idx(usize idx, usize size) {
    return idx ? idx - 1 : size - 1;
  }

}

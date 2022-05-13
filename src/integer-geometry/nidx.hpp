#pragma once

#include "alias.hpp"

namespace intgeometry2d {
  inline usize nidx(usize idx, usize size) {
    return idx + 1 == size ? 0 : idx + 1;
  }
} // intgeometry2d

#pragma once

#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/operation/ccw.hpp"
#include "src/real-geometry/utility/next-idx.hpp"
#include "src/real-geometry/utility/prev-idx.hpp"

namespace geometry {

  template< typename R >
  bool is_convex(const polygon<R> &poly) {
    usize n = poly.size();
    for (usize i = 0; i < n; i++) {
      if (ccw(poly[prev_idx(i, n)], poly[i], poly[next_idx(i, n)]) != -1) continue;
      return false;
    }
    return true;
  }

}

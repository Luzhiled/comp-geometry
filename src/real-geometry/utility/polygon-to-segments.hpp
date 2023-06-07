#pragma once

#include "src/real-geometry/class/polygon.hpp"
#include "src/real-geometry/class/segment.hpp"
#include "src/real-geometry/common/size-alias.hpp"
#include "src/real-geometry/utility/next-idx.hpp"

namespace geometry {

  template< typename R >
  segments<R> polygon_to_segments(const polygon<R> &poly) {
    usize n = poly.size();

    segments<R> segs(n);
    for (usize i = 0; i < n; i++) {
      segs[i] = segment<R>(poly[i], poly[next_idx(i, n)]);
    }

    return segs;
  }

}

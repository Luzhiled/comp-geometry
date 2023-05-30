#pragma once

#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/operation/cross-product.hpp"
#include "src/real-geometry/utility/equals/vector.hpp"

// parallel
namespace geometry {

  template< typename R >
  bool is_parallel(const line<R> &l1, const line<R> &l2) {
    return equals<R>(cross_product<R>(l1.b - l1.a, l2.b - l2.a), 0);
  }

}

#pragma once

#include "src/real-geometry/class/line.hpp"
#include "src/real-geometry/operation/inner-product.hpp"
#include "src/real-geometry/utility/equals/vector.hpp"

namespace geometry {

  template< typename R >
  bool is_orthogonal(const line<R> &l1, const line<R> &l2) {
    return equals<R>(inner_product<R>(l1.a - l1.b, l2.a - l2.b), 0);
  }

}

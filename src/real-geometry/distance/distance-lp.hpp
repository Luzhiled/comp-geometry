#include "./base.hpp"
#include "./line.hpp"
#include "./point.hpp"
#include "./projection.hpp"

namespace geometry {
  real_number distance_lp(const line &l, const point &p) {
    point pr = projection(l, p);
    return abs(pr - p);
  }
}

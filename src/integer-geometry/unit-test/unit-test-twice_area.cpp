#include <cassert>
#include <algorithm>

#include "../alias.hpp"
#include "../polygon.hpp"
#include "../twice_area.hpp"

int main() {
  using intgeometry2d::i32;
  using intgeometry2d::polygon;
  using LP32 = intgeometry2d::lattice_point<i32>;
  using intgeometry2d::twice_signed_area;
  using intgeometry2d::twice_unsigned_area;

  polygon< i32 > poly({
    LP32(4, 2),
    LP32(4, 4),
    LP32(2, 4),
    LP32(2, 2)
  });
  assert(twice_signed_area(poly) == 4 * 2);

  polygon< i32 > rpoly = poly;
  reverse(rpoly.begin(), rpoly.end());
  assert(twice_signed_area(rpoly) == -4 * 2);

  assert(twice_unsigned_area(poly) == twice_unsigned_area(rpoly));
}

#include <cassert>

#include "../point.hpp"

int main() {
  using intgeometry2d::lattice_point;
  using intgeometry2d::i32;

  using LP32 = lattice_point<i32>;
  assert(LP32(4, 8).x() == 4);
  assert(LP32(4, 8).y() == 8);

  assert(LP32(4, 8) == LP32(4, 8));
  assert(LP32(4, 8) != LP32(6, 8));
  assert(LP32(4, 8) != LP32(4, 12));
  assert(LP32(4, 8) != LP32(7, 12));

  assert((LP32(4, 8) + LP32(6, 6)) == LP32(10, 14));
  assert((LP32(4, 8) - LP32(6, 6)) == LP32(-2, 2));

  assert(LP32(4, 8).norm() == 80);
}

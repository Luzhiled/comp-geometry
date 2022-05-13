#include <cassert>

#include "../ntimes_centroid.hpp"

int main() {
  using intgeometry2d::i32;
  using LP32 = intgeometry2d::lattice_point<i32>;
  using intgeometry2d::lattice_points;
  using intgeometry2d::ntimes_centroid;

  lattice_points<i32> pts({
    LP32(1, 5),
    LP32(4, 8),
    LP32(-5, 0),
    LP32(-8, -9)
  });

  assert(ntimes_centroid(pts) == LP32(-8, 4));
}

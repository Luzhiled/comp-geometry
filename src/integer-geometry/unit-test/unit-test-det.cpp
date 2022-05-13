#include <cassert>

#include "../det.hpp"

int main() {
  using intgeometry2d::i64;
  using intgeometry2d::lattice_point;
  using intgeometry2d::det;

  using LP64 = lattice_point<i64>;
  assert(det(LP64(12345, 67890), LP64(3141592, 653589)) == -205'214'124'675ll);
}

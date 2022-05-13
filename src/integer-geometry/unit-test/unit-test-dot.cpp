#include <cassert>

#include "../dot.hpp"

int main() {
  using intgeometry2d::i64;
  using intgeometry2d::lattice_point;
  using intgeometry2d::dot;

  using LP64 = lattice_point<i64>;
  assert(dot(LP64(12345, 67890), LP64(3141592, 653589)) == 83'155'110'450ll);
}

#include <cassert>
#include <vector>

#include "../alias.hpp"
#include "../argcmp.hpp"

int main() {
  using std::vector;

  using intgeometry2d::i32;
  using intgeometry2d::usize;
  using LP32 = intgeometry2d::lattice_point<i32>;
  using intgeometry2d::argcmp;

  vector< LP32 > pts({
    LP32( 0,  0),
    LP32( 1,  0), LP32( 2,  0),
    LP32( 1,  1), LP32( 2,  2),
    LP32( 0,  1), LP32( 0,  2),
    LP32(-1,  1), LP32(-2,  2),
    LP32(-1,  0), LP32(-2,  0),
    LP32(-1, -1), LP32(-2, -2),
    LP32( 0, -1), LP32( 0, -2),
    LP32( 1, -1), LP32( 2, -2)
  });
  
  for (usize i = 0; i < pts.size(); i++) {
    for (usize j = 0; j < pts.size(); j++) {
      assert(argcmp(pts[i], pts[j]) == (i < j));
    }
  }
}

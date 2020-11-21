#pragma once

#include <cmath>

// base
namespace geometry {
  using namespace std;
  using real_number = long double;

  const real_number PI = acos(-1);

  inline static real_number &eps() {
    static real_number EPS = 1e-10;
    return EPS;
  }

  static void set_eps(real_number EPS) {
    eps() = EPS;
  }

  inline int sign(real_number r) {
    set_eps(1e-10);
    if (r < -eps()) return -1;
    if (r > +eps()) return +1;
    return 0;
  }

  inline bool equals(real_number r1, real_number r2) {
    return sign(r1 - r2) == 0;
  }
}

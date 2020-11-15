#pragma once

#include <cmath>
using namespace std;

// base
namespace geometry {
    using real_number = long double;

    const real_number eps = 1e-9;
    const real_number pi = acos(-1);

    inline int sign(real_number r) {
        if (r < -eps) return -1;
        if (r > +eps) return +1;
        return 0;
    }

    inline bool is_equal(real_number r1, real_number r2) {
        return sign(r1 - r2) == 0;
    }
}

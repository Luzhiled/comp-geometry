#pragma once

#include <complex>
#include <iostream>

namespace geometry {

  template< typename R >
  class vec2d : public std::complex< R > {
    using complex = std::complex< R >;

   public:
    using complex::complex;

    const R x() const { return this->real(); }
    const R y() const { return this->imag(); }

    friend vec2d operator*(const vec2d &v, const R &k) {
      return vec2d(v.x() * k, v.y() * k);
    }

    friend vec2d operator*(const R &k, const vec2d &v) {
      return vec2d(v.x() * k, v.y() * k);
    }

    friend std::istream &operator>>(std::istream &is, vec2d &v) {
      R x, y;
      is >> x >> y;
      v = vec2d(x, y);
      return is;
    }
 
  };

}

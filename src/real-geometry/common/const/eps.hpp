#pragma once

namespace geometry {

  template< typename R >
  inline static R &eps() {
    static R EPS = 1e-10;
    return EPS;
  }

  template< typename R >
  void set_eps(R EPS) {
    eps() = EPS;
  }

}

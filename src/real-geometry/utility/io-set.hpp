#pragma once

#include <iomanip>

namespace geometry {

  class IoSetup {
    using u32 = unsigned int;

    void set(std::ostream &os, u32 precision) {
      os << std::fixed << std::setprecision(precision);
    }

   public:
    IoSetup(u32 precision = 15) {
      std::cin.tie(0);
      std::ios::sync_with_stdio(0);

      set(std::cout, precision);
      set(std::cerr, precision);
    }
  } iosetup;

}

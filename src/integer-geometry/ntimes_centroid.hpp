#pragma once

#include <numeric>

#include "point.hpp"
#include "points.hpp"

namespace intgeometry2d {

  template< typename Z >
  lattice_point< Z > ntimes_centroid(const lattice_points<Z> &pts) {
    return std::accumulate(pts.begin(), pts.end(), lattice_point<Z>(0, 0));
  }

} // intgeometry2d

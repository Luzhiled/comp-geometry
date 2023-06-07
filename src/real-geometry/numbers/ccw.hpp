#pragma once

namespace geometry::number::ccw {

  constexpr int COUNTER_CLOCKWISE = +1;
  constexpr int CLOCKWISE         = -1;
  constexpr int ONLINE_BACK       = +2; // c-a-b
  constexpr int ONLINE_FRONT      = -2; // a-b-c
  constexpr int ON_SEGMENT        =  0; // a-c-b

}

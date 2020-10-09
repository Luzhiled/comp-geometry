#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./line.hpp"

// segment
namespace geometry {
    struct segment : line {
        segment() = default;
        using line::line;
    };

    using segments = vector< segment >;
}

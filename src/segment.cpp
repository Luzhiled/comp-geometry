#include <bits/stdc++.h>
using namespace std;

#pragma once

#include "./line.cpp"

// segment
namespace geometry {
    struct segment : line {
        segment() = default;
        using line::line;
    };

    using segments = vector< segment >;
}

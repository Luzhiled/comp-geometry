#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"

// product
namespace geometry {
    real_number cross(const point &a, const point &b) {
        return a.real() * b.imag() - a.imag() * b.real();
    }

    real_number dot(const point &a, const point &b) {
        return a.real() * b.real() + a.imag() * b.imag();
    }
}

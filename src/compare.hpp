#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./base.hpp"
#include "./point.hpp"

namespace geometry {
  bool compare_x(const point &a, const point &b) {
    return !is_equal(a.real(), b.real()) ? a.real() < b.real() : a.imag() < b.imag();
  }

  bool compare_y(const point &a, const point &b) {
    return !is_equal(a.imag(), b.imag()) ? a.imag() < b.imag() : a.real() < b.real();
  }
}

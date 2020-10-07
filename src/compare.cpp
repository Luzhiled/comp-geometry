#include <bits/stdc++.h>
using namespace std;

#include "./point.cpp"

namespace geometry {
  bool compare_x(const point &a, const point &b) {
    return a.real() != b.real() ? a.real() < b.real() : a.imag() < b.imag();
  }

  bool compare_y(const point &a, const point &b) {
    return a.imag() != b.imag() ? a.imag() < b.imag() : a.real() < b.real();
  }
}

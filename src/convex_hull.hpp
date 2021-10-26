#pragma once

#include <tuple>
#include <utility>
#include <vector>
#include <numeric>
#include <algorithm>

#include "./point.hpp"
#include "./polygon.hpp"
#include "./compare.hpp"
#include "./product.hpp"

// convex_hull
namespace geometry {
  pair< polygon, vector< int > > convex_hull_with_index(const points &pts) {
    int n = pts.size();
    if (n <= 2) {
      vector< int > idxs(n);
      iota(idxs.begin(), idxs.end(), 0);
      return {pts, idxs};
    }

    vector< pair< point, int > > ps;
    ps.reserve(n);
    for (int i = 0; i < n; i++) {
      ps.emplace_back(pts[i], i);
    }

    auto extension_compare_x = [](const pair<point, int> &a, const pair<point, int> &b) {
      return compare_x(a.first, b.first);
    };
    sort(ps.begin(), ps.end(), extension_compare_x);

    vector< int > idxs(2 * n);
    polygon poly(2 * n);
    int k = 0, i = 0;

    auto check = [&](int i) {
      return sign(cross(poly[k - 1] - poly[k - 2], ps[i].first - poly[k - 1])) == -1;
    };

    while (i < n) {
      while (k >= 2 and check(i)) k--;

      tie(poly[k], idxs[k]) = ps[i];
      k++; i++;
    }

    i = n - 2;
    int t = k + 1;
    while (i >= 0) {
      while (k >= t and check(i)) k--;

      tie(poly[k], idxs[k]) = ps[i];
      k++; i--;
    }

    poly.resize(k - 1);
    idxs.resize(k - 1);
    return {poly, idxs};
  }

  polygon convex_hull(points pts) {
    int n = pts.size(), k = 0;
    if (n <= 2) return pts;

    sort(pts.begin(), pts.end(), compare_x);
    polygon res(2 * n);

    auto check = [&](int i) {
      return sign(cross(res[k - 1] - res[k - 2], pts[i] - res[k - 1])) == -1;
    };

    for (int i = 0; i < n; res[k++] = pts[i++]) {
      while (k >= 2 and check(i)) --k;
    }

    for (int i = n - 2, t = k + 1; i >= 0; res[k++] = pts[i--]) {
      while (k >= t and check(i)) --k;
    }

    res.resize(k - 1);
    return res;
  }
}

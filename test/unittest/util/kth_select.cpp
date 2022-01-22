#include <vector>
#include <algorithm>
#include <cassert>
#include <functional>
#include <iostream>

#include "../../../src/util/kth_select.hpp"

int main() {
  std::vector< int > vs({5, 2, 4, 9, 8, 4});

  std::vector< int > res;
  for (int i = 0; i < (int)vs.size(); i++) {
    res.emplace_back(kth_select(vs, i));
  }

  std::sort(vs.begin(), vs.end());

  for (int i = 0; i < (int)vs.size(); i++) {
    std::cerr << i << "th : " << vs[i] << ", " << res[i] << std::endl;
  }

  std::cerr << "assert(vs == res): " << std::flush;
  assert(vs == res);
  std::cerr << "ok" << std::endl;
}

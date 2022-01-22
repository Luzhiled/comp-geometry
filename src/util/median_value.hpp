#include <vector>
#include <functional>
#include <cstddef>

#include "impl_kth_select.hpp"

template< typename T >
T median_value(std::vector< T > vs) {
  return impl_kth_select(std::begin(vs), std::end(vs), k, std::less< T >());
}

template< typename T, class Compare >
T median_value(std::vector< T > vs, Compare comp) {
  std::assert(vs.size() != 0);

  std::size_t k = vs.size() / 2;
  return impl_kth_select(std::begin(vs), std::end(vs), k, comp);
}

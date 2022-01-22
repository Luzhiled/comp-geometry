#include <vector>
#include <functional>
#include <cstddef>

#include "impl_kth_select.hpp"

template< typename T >
T kth_select(std::vector< T > vs, std::size_t k) {
  return impl_kth_select<T>(std::begin(vs), std::end(vs), k, std::less< T >());
}

template< typename T, class Compare >
T kth_select(std::vector< T > vs, std::size_t k, Compare comp) {
  return impl_kth_select<T>(std::begin(vs), std::end(vs), k, comp);
}

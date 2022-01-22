#include <algorithm>
#include <vector>
#include <functional>
#include <cstddef>

template< class RandomAccessIterator, class Compare >
RandomAccessIterator impl_smallsize_kth_select(
    RandomAccessIterator first, 
    RandomAccessIterator last, 
    std::size_t k,
    Compare comp) 
{
  std::sort(first, last, comp);
  return (first + k);
}

template< typename T, class RandomAccessIterator, class Compare >
T impl_kth_select(
    RandomAccessIterator first,
    RandomAccessIterator last,
    std::size_t k,
    Compare comp = std::less< T >()) 
{
  // TODO: implementation
  return *impl_smallsize_kth_select(first, last, k, comp);
}

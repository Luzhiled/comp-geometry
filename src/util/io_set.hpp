#include <iomanip>

class IoSetup {
  using u32 = unsigned int;

  void set(ostream &os, u32 precision) {
    os << fixed << setprecision(precision);
  }

public:
  IoSetup(u32 precision = 15) {
    cin.tie(0);
    ios::sync_with_stdio(0);

    set(cout, precision);
    set(cerr, precision);
  }
} iosetup;

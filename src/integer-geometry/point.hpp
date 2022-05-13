#include "alias.hpp"

namespace intgeometry2d {

  template< typename Z>
  class lattice_point {
    Z x_, y_;

  public:
    lattice_point() {}
    lattice_point(Z x_, Z y_) : x_(x_), y_(y_) {}
    
    Z x() const { return x_; }
    Z y() const { return y_; }

    bool operator==(const lattice_point &p) const { return x_ == p.x_ and y_ == p.y_; }
    bool operator!=(const lattice_point &p) const { return x_ != p.x_ or  y_ != p.y_; }

    lattice_point operator+(lattice_point p) { return lattice_point(x_ + p.x_, y_ + p.y_); }
    lattice_point operator-(lattice_point p) { return lattice_point(x_ - p.x_, y_ - p.y_); }

    Z norm() { return x_ * x_ + y_ * y_; }
  };

} // intgeometry2d

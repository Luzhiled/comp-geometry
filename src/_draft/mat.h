using uint = unsigned int;
using R = double;

template< uint r, uint c, class T >
class mat {
public:
  T _vec[r * c];

  const T &operator[] (const uint i) const;
        T &operator[] (const uint i);

  mat<r, c, T> operator- () const;

  mat<r, c, T> &operator+= (const mat<r, c, T> &op);
  mat<r, c, T> &operator-= (const mat<r, c, T> &op);
  mat<r, c, T>  operator+  (const mat<r, c, T> &op) const;
  mat<r, c, T>  operator-  (const mat<r, c, T> &op) const;

  mat<r, c, T> &operator*= (const T &scalar);
  mat<r, c, T> &operator/= (const T &scalar);
  mat<r, c, T>  operator*  (const T &scalar) const;
  mat<r, c, T>  operator/  (const T &scalar) const;

  R norm() const;
  R dist(const mat<r, c, T> &v) const;

  bool is_nan() const;
  bool is_inf() const;

  mat<3, 1, T> cross(const mat<3, 1, T> &v) const;
  T            dot  (const mat<r, c, T> &v) const;

  const T &x() const { return _vec[0]; }
        T &x()       { return _vec[0]; }
  const T &y() const { return _vec[1]; }
        T &y()       { return _vec[1]; }
  const T &z() const { return _vec[2]; }
        T &z()       { return _vec[2]; }
};

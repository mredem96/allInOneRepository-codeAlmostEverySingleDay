// c++ templates -> code taken from https://isocpp.org/wiki/faq/templates

/*
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <limits>
template<typename T> inline std::string stringify(const T& x)
{
  std::ostringstream out;
  out << x;
  return out.str();
}
template<> inline std::string stringify<bool>(const bool& x)
{
  std::ostringstream out;
  out << std::boolalpha << x;
  return out.str();
}
template<> inline std::string stringify<double>(const double& x)
{
  const int sigdigits = std::numeric_limits<double>::digits10;
  // or perhaps std::numeric_limits<double>::max_digits10 if that is available on your compiler
  std::ostringstream out;
  out << std::setprecision(sigdigits) << x;
  return out.str();
}
template<> inline std::string stringify<float>(const float& x)
{
  const int sigdigits = std::numeric_limits<float>::digits10;
  // or perhaps std::numeric_limits<float>::max_digits10 if that is available on your compiler
  std::ostringstream out;
  out << std::setprecision(sigdigits) << x;
  return out.str();
}
template<> inline std::string stringify<long double>(const long double& x)
{
  const int sigdigits = std::numeric_limits<long double>::digits10;
  // or perhaps std::numeric_limits<long_double>::max_digits10 if that is available on your compiler
  std::ostringstream out;
  out << std::setprecision(sigdigits) << x;
  return out.str();
}
*/

/*
// This would go into a header file such as "Array.h"
class Array {
public:
  Array(int len=10)                  : len_(len), data_(new int[len]) { }
 ~Array()                            { delete[] data_; }
  int len() const                    { return len_;     }
  const int& operator[](int i) const { return data_[check(i)]; }  // Subscript operators often come in pairs
  int&       operator[](int i)       { return data_[check(i)]; }  // Subscript operators often come in pairs
  Array(const Array&);
  Array& operator= (const Array&);
private:
  int  len_;
  int* data_;
  int  check(int i) const
    {
      if (i < 0 || i >= len_)
        throw BoundsViol("Array", i, len_);
      return i;
    }
};
*/
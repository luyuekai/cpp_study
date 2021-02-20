#ifndef __COMPLEX__
#define __COMPLEX__

#include <string>

class complex {
 private:
  double re, im;

 public:
  complex(const double re = 0, const double im = 0) : re(re), im(im) {}

  complex& operator+=(const complex&);
  complex& operator-=(const complex&);
  complex& operator*=(const complex&);

  std::string to_string() {
    return "re: " + std::to_string(re) + "; im: " + std::to_string(im) + "\n";
  }

  double real() const { return re; }
  double imag() const { return im; }
};

inline complex& complex::operator+=(const complex& r) {
  this->re += r.re;
  this->im += r.im;
  return *this;
}

inline complex& complex::operator-=(const complex& r) {
  this->re -= r.re;
  this->im -= r.im;
  return *this;
}

inline complex& complex::operator*=(const complex& r) {
  double tmp = this->re * r.re - this->im * r.im;
  this->im = this->im * r.re + this->re * r.im;
  this->re = tmp;
  return *this;
}

#endif
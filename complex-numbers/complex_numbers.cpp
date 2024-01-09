#include "complex_numbers.h"

namespace complex_numbers {
double Complex::real() { return this->realN; }
double Complex::imag() { return this->imagN; }
double Complex::abs() { return sqrt(pow(realN, 2) + pow(imagN, 2)); }
Complex Complex::conj() { return Complex(realN, -1 * imagN); }
Complex Complex::exp() {
  return Complex(pow(M_E, realN) * cos(imagN), pow(M_E, realN) * sin(imagN));
}
Complex Complex::operator+(Complex const &num) const {
  return Complex(realN + num.realN, imagN + num.imagN);
}
Complex Complex::operator-(Complex const &num) const {
  return Complex(realN - num.realN, imagN - num.imagN);
}
Complex Complex::operator*(Complex const &num) const {
  return Complex(realN * num.realN - imagN * num.imagN,
                 imagN * num.realN + realN * num.imagN);
}
Complex Complex::operator/(Complex const &num) const {
  double den = pow(num.realN, 2) + pow(num.imagN, 2);
  double nom1 = realN * num.realN + imagN * num.imagN;
  double nom2 = imagN * num.realN - realN * num.imagN;
  return Complex(nom1 / den, nom2 / den);
}
} // namespace complex_numbers

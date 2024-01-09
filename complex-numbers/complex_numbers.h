#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H
#include <cmath>
#define M_PI 3.14159265358979323846

namespace complex_numbers {
class Complex {
  double realN, imagN;

public:
  Complex(double r = 0, double i = 0) {
    realN = r;
    imagN = i;
  }
  double real();
  double imag();
  double abs();
  Complex conj();
  Complex exp();
  Complex operator+(Complex const &num) const;
  Complex operator-(Complex const &num) const;
  Complex operator*(Complex const &num) const;
  Complex operator/(Complex const &num) const;
};

} // namespace complex_numbers

#endif // COMPLEX_NUMBERS_H

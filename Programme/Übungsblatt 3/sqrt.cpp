#include <iostream>

double my_abs(double x) {
  if (x < 0) {
    return -x;
  }
  return x;
}

double sqrt(double x) {
    return sqrt(x, 0.0000000001);
}
// Calculates sqrt with newton's method
double sqrt(double x, double accuracy) {
    double result = x;

    while (my_abs(result * result - x) > accuracy) {
        result = (result + x / result) / 2;
    }
    return result;
}

int main() {
    double x = 2;
    double sqrtX = sqrt(x);
    std::cout << "sqrt(" << x << ") = " << sqrtX << std::endl;
    return 0;
}

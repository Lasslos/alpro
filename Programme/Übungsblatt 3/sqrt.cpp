#include <iostream>

double my_abs(const double& x) {
  if (x < 0) {
    return -x;
  }
  return x;
}

// Calculates sqrt with newton's method
double sqrt(const double& x, const double& accuracy) {
    double result = x;

    while (my_abs(result * result - x) > accuracy) {
        result = (result + x / result) / 2;
    }
    return result;
}
double sqrt(const double& x) {
  return sqrt(x, 0.0000000001);
}

int main() {
    double x = 2;
    double sqrtX = sqrt(x);
    std::cout << "sqrt(" << x << ") = " << sqrtX << std::endl;
    return 0;
}

#include <iostream>

double my_abs(const double& x) {
  if (x < 0) {
    return -x;
  }
  return x;
}

// Calculates sin, cos, tan and cot with taylor series

//Taylor Series of sin:
// sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
double sin(const double& x, const double& accuracy) {
  double result = 0;

  double currentTerm = x;

  for (int i = 2; my_abs(currentTerm) > accuracy; i += 2) {
    result += currentTerm;
    //Turning the currentTerm into the next term
    currentTerm *= -1 * x * x / (i * (i + 1));
  }
  return result;
}

double sin(const double& x) {
  return sin(x, 0.0000000001);
}

//Taylor Series of cos:
// cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...
double cos(const double& x, const double& accuracy) {
  double result = 0;

  double currentTerm = 1;

  for (int i = 1; my_abs(currentTerm) > accuracy; i += 2) {
    result += currentTerm;
    std::cout << "result: " << result << std::endl;
    //Turning the currentTerm into the next term
    currentTerm *= -1 * x * x / (i * (i + 1));
  }
  return result;
}

double cos(const double& x) {
  return cos(x, 0.0000000001);
}

//Tan:
// tan = sin/cos
double tan(const double& x, const double& accuracy) {
  return sin(x, accuracy)/cos(x, accuracy);
}
double tan(const double& x) {
  return tan(x, 0.0000000001);
}
//Cot:
// cot = cos/sin
double cot(const double& x, const double& accuracy) {
  return cos(x, accuracy)/sin(x, accuracy);
}
double cot(const double& x) {
  return cot(x, 0.0000000001);
}

int main() {
    //test sin, cos
    double x = 0.5;
    double sinX = sin(x, 0.1);
    double cosX = cos(x, 0.01);
    double tanX = tan(x);
    double cotX = cot(x);
    std::cout << "sin(" << x << ") = " << sinX << std::endl;
    std::cout << "cos(" << x << ") = " << cosX << std::endl;
    std::cout << "tan(" << x << ") = " << tanX << std::endl;
    std::cout << "cot(" << x << ") = " << cotX << std::endl;
    return 0;
}

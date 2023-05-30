#include "arithmetic.hpp"

//defining arithmetic methods
void Arithmetic::input(int num1, int num2) {
  x = num1;
  y = num2;
}

int Arithmetic::add() {
  return x + y;
}

int Arithmetic::sub() {
  return x - y;
}

int Arithmetic::mul() {
  return x * y;
}

int Arithmetic::div() {
  if (y == 0) {
    throw std::runtime_error("Cannot divide by zero.");
        }
  return x / y;
}

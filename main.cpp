#include <iostream>

// include your header file here:
#include "arithmetic.hpp"

int main() {
  int num1, num2;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    //creating object
    Arithmetic arith;
    arith.input(num1, num2);

    std::cout << "The sum of the two integers is: " << arith.add() << std::endl;
    std::cout << "The difference of the two integers is: " << arith.sub() << std::endl;
    std::cout << "The product of the two integers is: " << arith.mul() << std::endl;
    try {
        std::cout << "The quotient of the two integers is: " << arith.div() << std::endl;
    } catch (std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

  return 0;
}

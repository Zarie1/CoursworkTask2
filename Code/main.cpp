#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::cout << "Add: " << calc.Add(10, 3) << std::endl;
    std::cout << "Subtract: " << calc.Sub(6, 4) << std::endl;
    std::cout << "Multiply: " << calc.Mul(5.0, 3.0) << std::endl;
    return 0;
}

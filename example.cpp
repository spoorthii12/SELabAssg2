/**
 * @file example.cpp
 * @brief Implementation of MathOperations class.
 */

#include "example.h"
#include <iostream>

namespace MathUtils {

int MathOperations::add(int a, int b) {
    return a + b;
}

int MathOperations::subtract(int a, int b) {
    return a - b;
}

int MathOperations::multiply(int a, int b) {
    return a * b;
}

double MathOperations::divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0.0;
    }
    return static_cast<double>(a) / b;
}

} // namespace MathUtils

/**
 * @brief Main function demonstrating usage of MathOperations.
 * @return int Exit status.
 */
int main() {
    int x = 10, y = 5;
    
    std::cout << "Addition: " << MathUtils::MathOperations::add(x, y) << std::endl;
    std::cout << "Subtraction: " << MathUtils::MathOperations::subtract(x, y) << std::endl;
    std::cout << "Multiplication: " << MathUtils::MathOperations::multiply(x, y) << std::endl;
    std::cout << "Division: " << MathUtils::MathOperations::divide(x, y) << std::endl;

    return 0;
}

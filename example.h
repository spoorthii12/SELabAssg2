/**
 * @file example.h
 * @brief Header file for a simple C++ class demonstrating Doxygen comments.
 * 
 * This file contains the declaration of the `MathOperations` class
 * which provides basic mathematical operations.
 */

#ifndef EXAMPLE_H
#define EXAMPLE_H

/// @brief Namespace for mathematical functions.
namespace MathUtils {

/**
 * @class MathOperations
 * @brief A simple class for mathematical operations.
 * 
 * This class provides basic arithmetic operations such as addition,
 * subtraction, multiplication, and division.
 */
class MathOperations {
public:
    /**
     * @brief Adds two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Sum of a and b.
     */
    static int add(int a, int b);

    /**
     * @brief Subtracts one number from another.
     * @param a First number.
     * @param b Second number.
     * @return Result of a - b.
     */
    static int subtract(int a, int b);

    /**
     * @brief Multiplies two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Product of a and b.
     */
    static int multiply(int a, int b);

    /**
     * @brief Divides one number by another.
     * @param a Numerator.
     * @param b Denominator.
     * @return Quotient of a / b.
     * @note If b is zero, an error is printed.
     */
    static double divide(int a, int b);
};

} // namespace MathUtils

#endif // EXAMPLE_H

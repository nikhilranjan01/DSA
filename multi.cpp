#include <iostream>

int main() {
    // Declare and initialize four numbers
    double num1, num2, num3, num4;

    // Get input for the four numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    std::cout << "Enter the fourth number: ";
    std::cin >> num4;

    // Multiply the four numbers
    double result = num1 * num2 * num3 * num4;

    // Display the result
    std::cout << "The result of multiplying the four numbers is: " << result << std::endl;

    return 0;
}

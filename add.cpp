#include <iostream>

int main() {
    // Declare variables to store four numbers
    int num1, num2, num3, num4;

    // Get input for the four numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    std::cout << "Enter the fourth number: ";
    std::cin >> num4;

    // Calculate the sum
    int sum = num1 + num2 + num3 + num4;

    // Display the result
    std::cout << "The sum of the four numbers is: " << sum << std::endl;

    return 0;
}

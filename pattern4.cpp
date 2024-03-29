#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows for the pyramid pattern: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << "  ";
        }

        // Print ascending numbers
        for (int j = 1; j <= i; ++j) {
            std::cout << j << " ";
        }

        // Print descending numbers
        for (int k = i - 1; k >= 1; --k) {
            std::cout << k << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}

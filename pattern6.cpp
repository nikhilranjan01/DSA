#include <iostream>

int main() {
    int rows;
    char ch = 'A';

    std::cout << "Enter the number of rows for the pyramid pattern: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << " ";
        }

        // Print characters in ascending order
        for (int j = 1; j <= i; ++j) {
            std::cout << ch++ << " ";
        }

        // Print characters in descending order
        for (int k = i - 1; k >= 1; --k) {
            std::cout << --ch << " ";
        }

        std::cout << std::endl;
        ch = 'A'; // Reset character to 'A' for next row
    }

    return 0;
}

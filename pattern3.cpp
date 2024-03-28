#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows for the square pattern: ";
    std::cin >> rows;

    // Upper side of the square
    for (int i = 1; i <= rows; ++i) {
        // Print asterisks for the first and last rows
        if (i == 1 || i == rows) {
            for (int j = 1; j <= rows; ++j) {
                std::cout << "* ";
            }
        } else {
            // Print asterisks for the hollow part
            std::cout << "* ";
            for (int j = 1; j <= rows - 2; ++j) {
                std::cout << "  ";
            }
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

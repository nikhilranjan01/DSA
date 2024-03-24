#include <iostream>

int main() {
    int rows, i, j, space;

    std::cout << "Enter the number of rows for the diamond pattern: ";
    std::cin >> rows;

    // Upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++)
            std::cout << " ";

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++)
            std::cout << "*";

        std::cout << std::endl;
    }

    // Lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (space = 1; space <= rows - i; space++)
            std::cout << " ";

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++)
            std::cout << "*";

        std::cout << std::endl;
    }

    return 0;
}

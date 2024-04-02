#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows for the diamond pattern: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << " ";
        }
        std::cout << "*";

        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; ++j) {
                std::cout << " ";
            }
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    for (int i = rows - 1; i >= 1; --i) {
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << " ";
        }
        std::cout << "*";

        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; ++j) {
                std::cout << " ";
            }
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}


#include <iostream>
#include <cstdlib>
const int SIZE = 3;
int main() {

    int matrix[SIZE][SIZE];
    std::cout << "Enter elements:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    int leftDiagonalSum = 0;
    for (int i = 0; i < SIZE; ++i) {
        leftDiagonalSum += matrix[i][i];
    }

    int rightDiagonalSum = 0;
    for (int i = 0; i < SIZE; ++i) {
        rightDiagonalSum += matrix[i][SIZE - 1 - i];
    }

    int positiveDifference = abs(leftDiagonalSum - rightDiagonalSum);

    std::cout << "Left diagonal sum: " << leftDiagonalSum << std::endl;
    std::cout << "Right diagonal sum: " << rightDiagonalSum << std::endl;
    std::cout << "Positive difference: " << positiveDifference << std::endl;

    return 0;
}
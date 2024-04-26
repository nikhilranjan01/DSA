#include <iostream>
using namespace std;

void printMPattern(int size) {
    // Loop for each row
    for (int row = 0; row < size; row++) {
        // Loop for each column
        for (int col = 0; col < size; col++) {
            // Print '*' for specific positions to form the 'M' shape
            if (col == 0 || col == size - 1 ||                // Vertical lines
                (row == col && col <= size / 2) ||             // Left diagonal line
                (row + col == size - 1 && col >= size / 2)) {  // Right diagonal line
                cout << "*";
            } else {
                cout << " "; // Print space for other positions
            }
        }
        // Move to the next line after each row is printed
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the 'M' pattern: ";
    cin >> size;

    cout << "Letter 'M' Pattern:" << endl;
    printMPattern(size);

    return 0;
}

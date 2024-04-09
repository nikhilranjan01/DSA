#include <iostream>
using namespace std;

void printRPattern(int height) {
    // Loop for each row
    for (int row = 0; row < height; row++) {
        // Loop for each column
        for (int col = 0; col < height; col++) {
            if (col == 0 || (row == 0 && col < height - 1) || (row == height / 2 && col < height - 1) || (col == row && row > height / 2)) {
                // Print '*' for the left vertical line, top horizontal line, and diagonal line
                cout << "*";
            } else {
                // Print space for other positions
                cout << " ";
            }
        }
        // Move to the next line after each row is printed
        cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter the height of the letter 'R' pattern: ";
    cin >> height;

    cout << "Letter 'R' pattern:" << endl;
    printRPattern(height);

    return 0;
}

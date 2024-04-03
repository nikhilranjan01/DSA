#include <iostream>
using namespace std;

void printBPattern(int height) {
    int width = height / 2 + 2;

    // Loop for each row
    for (int row = 0; row < height; row++) {
        // Loop for each column
        for (int col = 0; col <= width; col++) {
            // Print '*' for the first column and last column,
            // and for the rows where either first or last row
            if (col == 0 || col == width || ((row == 0 || row == height / 2 || row == height - 1) && col < width)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        // Move to the next line after each row is printed
        cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter the height of the letter 'B' pattern: ";
    cin >> height;

    cout << "Letter 'B' pattern:" << endl;
    printBPattern(height);

    return 0;
}

#include <iostream>
using namespace std;

void printPPattern(int height) {
    // Loop for each row
    for (int row = 0; row < height; row++) {
        // Loop for each column
        for (int col = 0; col <= height; col++) {
            // Condition to print '*' at specific positions
            if (col == 0 || (row == 0 || row == height / 2) && col < height) {
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
    cout << "Enter the height of the letter 'P' pattern: ";
    cin >> height;

    cout << "Letter 'P' pattern:" << endl;
    printPPattern(height);

    return 0;
}

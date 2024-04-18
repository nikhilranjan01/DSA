#include <iostream>
using namespace std;

void printHPattern(int height) {
    // Loop for each row
    for (int row = 0; row < height; row++) {
        // Loop for each column
        for (int col = 0; col < height; col++) {
            // Print '*' for the first and last columns and the middle row
            if (col == 0 || col == height - 1 || row == height / 2) {
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
    int height;
    cout << "Enter the height of the 'H' pattern: ";
    cin >> height;

    cout << "Letter 'H' Pattern:" << endl;
    printHPattern(height);

    return 0;
}

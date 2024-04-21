#include <iostream>
using namespace std;

void printTPattern(int size) {
    // Loop for each row
    for (int row = 0; row < size; row++) {
        // Loop for each column
        for (int col = 0; col < size; col++) {
            // Print '*' for the middle row and the center column
            if (row == size / 2 || col == size / 2) {
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
    cout << "Enter the size of the 'T' pattern: ";
    cin >> size;

    cout << "Letter 'T' Pattern:" << endl;
    printTPattern(size);

    return 0;
}

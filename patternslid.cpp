#include <iostream>
using namespace std;

void printSlashPattern(int size) {
    // Loop for each row
    for (int row = 1; row <= size; row++) {
        // Loop for each column
        for (int col = 1; col <= size; col++) {
            // Print '*' for positions where row + col equals size + 1
            if (row + col == size + 1) {
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
    cout << "Enter the size of the pattern: ";
    cin >> size;

    cout << "Slash Pattern:" << endl;
    printSlashPattern(size);

    return 0;
}

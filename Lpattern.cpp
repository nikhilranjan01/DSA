#include <iostream>
using namespace std;

void printLPattern(int size) {
    // Loop for each row
    for (int row = 1; row <= size; row++) {
        // Loop for each column
        for (int col = 1; col <= size; col++) {
            // Print '*' for positions on the leftmost column or bottom row
            if (col == 1 || row == size) {
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

    cout << "Letter 'L' Pattern:" << endl;
    printLPattern(size);

    return 0;
}

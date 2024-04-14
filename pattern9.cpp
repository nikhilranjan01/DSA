#include <iostream>
using namespace std;

void printCustomPattern(int size) {
    // Loop for each row
    for (int row = 1; row <= size; row++) {
        // Loop for each column
        for (int col = 1; col <= size; col++) {
            if (row <= size / 2 && col <= size / 2) {
                // Print '*' for the top-left section
                cout << "* ";
            } else if (row <= size / 2 && col > size / 2) {
                // Print '#' for the top-right section
                cout << "# ";
            } else if (row > size / 2 && col <= size / 2) {
                // Print '@' for the bottom-left section
                cout << "@ ";
            } else {
                // Print '$' for the bottom-right section
                cout << "$ ";
            }
        }
        // Move to the next line after each row is printed
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the pattern (even number): ";
    cin >> size;

    if (size % 2 != 0) {
        cout << "Please enter an even number for the size." << endl;
        return 1;
    }

    cout << "Custom Pattern:" << endl;
    printCustomPattern(size);

    return 0;
}

#include <iostream>
using namespace std;

void printPattern(int size) {
    // Loop for each row
    for (int row = 1; row <= size; row++) {
        // Loop for each column
        for (int col = 1; col <= size; col++) {
            // Define the pattern logic here
            if (row == col || row + col == size + 1) {
                // Print '*' for specified conditions
                cout << "*";
            } else {
                // Print ' ' (space) for other positions
                cout << " ";
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

    cout << "Pattern:" << endl;
    printPattern(size);

    return 0;
}

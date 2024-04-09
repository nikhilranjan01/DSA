#include <iostream>
using namespace std;

void printHPattern(int height) {
    int mid = height / 2;

    // Loop for each row
    for (int row = 0; row < height; row++) {
        // Loop for each column
        for (int col = 0; col < height; col++) {
            if (col == 0 || col == height - 1 || row == mid) {
                // Print '*' for the edges and middle row
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
    cout << "Enter the height of the letter 'H' pattern: ";
    cin >> height;

    cout << "Letter 'H' pattern:" << endl;
    printHPattern(height);

    return 0;
}

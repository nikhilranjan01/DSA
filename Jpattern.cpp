#include <iostream>
using namespace std;

void printJPattern(int height) {
    // Loop for each row
    for (int row = 0; row < height; row++) {
        // Loop for each column
        for (int col = 0; col <= height; col++) {
            if (col == height / 2 || (row == 0 && col < height / 2) || 
                (row == height - 1 && col <= height / 2)) {
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
    cout << "Enter the height of the letter 'J' pattern: ";
    cin >> height;

    cout << "Letter 'J' pattern:" << endl;
    printJPattern(height);

    return 0;
}

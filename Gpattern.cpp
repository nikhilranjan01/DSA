#include <iostream>
using namespace std;

void printGPattern(int height) {
    // Loop for each row
    for (int row = 0; row < height; row++) {
        // Loop for each column
        for (int col = 0; col <= height; col++) {
            if ((col == 0 && row != 0 && row != height - 1) || 
                (row == 0 && col != height) || 
                (row == height - 1 && col < height) || 
                (col == height && row >= height / 2 && row != height - 1)) {
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
    cout << "Enter the height of the letter 'G' pattern: ";
    cin >> height;

    cout << "Letter 'G' pattern:" << endl;
    printGPattern(height);

    return 0;
}

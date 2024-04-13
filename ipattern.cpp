#include <iostream>
using namespace std;

void printIPattern(int height) {
    // Loop for each row
    for (int row = 0; row < height; row++) {
        // Print '*' for the middle row (height / 2) and every column
        cout << "*";
        cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter the height of the pattern: ";
    cin >> height;

    cout << "Letter 'I' Pattern:" << endl;
    printIPattern(height);

    return 0;
}

#include <iostream>
using namespace std;

void printHeartPattern(int size) {
    // Upper part of the heart
    for (int i = size / 2; i <= size; i += 2) {
        // Leading spaces
        for (int j = 1; j < size - i; j += 2) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces between parts of the heart
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part of the heart
    for (int i = size; i >= 1; i--) {
        // Leading spaces
        for (int j = i; j < size; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= (size - i) * 2; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the heart pattern: ";
    cin >> size;

    cout << "Heart Pattern:" << endl;
    printHeartPattern(size);

    return 0;
}

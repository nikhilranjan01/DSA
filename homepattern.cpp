#include <iostream>
using namespace std;

void printHomePattern(int size) {
    // Print roof of the home
    for (int i = 0; i < size / 2; i++) {
        // Leading spaces
        for (int j = 0; j < size / 2 - i; j++) {
            cout << " ";
        }
        // Print roof stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print lower part of the home
    for (int i = 0; i < size / 2; i++) {
        // Print left side of the home
        cout << "*";
        for (int j = 0; j < size - 2; j++) {
            cout << " ";
        }
        // Print right side of the home
        cout << "*" << endl;
    }

    // Print base of the home
    for (int i = 0; i < size; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the home pattern: ";
    cin >> size;

    cout << "Home Pattern:" << endl;
    printHomePattern(size);

    return 0;
}

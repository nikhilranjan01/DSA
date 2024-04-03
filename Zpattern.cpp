#include <iostream>
using namespace std;

void printZPattern(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1) {
                cout << "* ";
            }
            else if (i + j == rows - 1) {
                cout << "* ";
            }
            else {
                cout << "  "; // Print spaces for non-Z pattern elements
            }
        }
        cout << endl;
    }
}

int main() {
    const int rows = 5;
    const int cols = 5;

    cout << "Z Pattern Traversal:" << endl;
    printZPattern(rows, cols);

    return 0;
}

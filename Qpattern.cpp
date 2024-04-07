#include <iostream>
#include <cmath>
using namespace std;

void printQPattern(int size) {
    int radius = size / 2;
    
    for (int i = 0; i <= size; ++i) {
        for (int j = 0; j <= size; ++j) {
            // Calculate distance from center (radius)
            float distance = sqrt(pow(i - radius, 2) + pow(j - radius, 2));
            
            if (distance > radius - 0.5 && j < size - radius + 1 && i > radius / 2 && i < size - radius / 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the letter 'Q' pattern: ";
    cin >> size;

    cout << "Letter 'Q' pattern:" << endl;
    printQPattern(size);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of N pattern: ";
    cin >> height;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height; ++j) {
            if (j == 0 || j == height - 1 || i == j)
                cout << "N";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

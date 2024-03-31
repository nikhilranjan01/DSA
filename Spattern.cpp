#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of S pattern: ";
    cin >> height;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height; ++j) {
            if ((i == 0 || i == height - 1 || i == height / 2) && j != height - 1)
                cout << "#";
            else if ((i < height / 2 && j == 0) || (i > height / 2 && j == height - 1))
                cout << "#";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

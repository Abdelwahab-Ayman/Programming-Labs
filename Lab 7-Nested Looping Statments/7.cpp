#include <iostream>
using namespace std;

int main() {
    int rows = 10;

    for (int i = 1; i <= rows; ++i) {
        int stars, spaces;

        if (i <= 5) {
            stars = 6 - i;
            spaces = 2 * (i - 1);
        } else {
            stars = i - 5 + 1;
            spaces = 2 * (rows - i);
        }

        // Print left stars
        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }

        // Print spaces
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }

        // Print right stars
        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}


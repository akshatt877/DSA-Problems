#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i; j++) {
            cout << "  ";
        }

        // Print letters
        char letter = 'A' + i;
        for (int k = 0; k <= i; k++) {
            cout << letter << " ";
        }

        cout << endl;
    }

    return 0;
}


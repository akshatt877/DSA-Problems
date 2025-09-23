#include <iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter number of rows: ";
    cin >> row;

    // Top Half
    for (int i = row; i >= 1; i--) {

        //printing * row times/i times
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        
        //printing spaces 
        for (int k = 1; k <= 2 * row - 2 * i; k++) {
            cout << "  "; // Two spaces for alignment
        }

        for (int l = 1; l <= i; l++) {
            cout << "* ";
        }

        cout << endl;
    }

    // Bottom Half
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        for (int k = 1; k <= 2 * row - 2 * i; k++) {
            cout << "  "; // Two spaces for alignment
        }

        for (int l = 1; l <= i; l++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

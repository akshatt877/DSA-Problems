#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int rem, decimal = 0, mul = 1;

    // Step 1: Convert binary to decimal
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * mul;
        mul *= 2;
        binary /= 10;
    }

    // Step 2: Convert decimal to octal
    int octal = 0;
    mul = 1;
    while (decimal > 0) {
        rem = decimal % 8;
        octal += rem * mul;
        mul *= 10;
        decimal /= 8;
    }

    cout << "Octal equivalent: " << octal << endl;
    return 0;
}
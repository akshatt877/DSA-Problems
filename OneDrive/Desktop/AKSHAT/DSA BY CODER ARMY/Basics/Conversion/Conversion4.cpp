#include <iostream>
using namespace std;

int main() {
    int octal;
    cout << "Enter an octal number: ";
    cin >> octal;

    int rem;
    string binary = "";

    while (octal > 0) {
        rem = octal % 10;

        // Convert each octal digit to 3-bit binary
        switch (rem) {
            case 0: binary = "000" + binary; break;
            case 1: binary = "001" + binary; break;
            case 2: binary = "010" + binary; break;
            case 3: binary = "011" + binary; break;
            case 4: binary = "100" + binary; break;
            case 5: binary = "101" + binary; break;
            case 6: binary = "110" + binary; break;
            case 7: binary = "111" + binary; break;
        }

        octal /= 10;
    }

    cout << "Binary equivalent: " << binary << endl;
    return 0;
}
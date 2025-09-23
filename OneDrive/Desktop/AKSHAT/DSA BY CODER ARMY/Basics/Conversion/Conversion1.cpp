//Decimal to Octal
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;

    int rem, mul = 1, ans = 0;

    while (n > 0) {
        rem = n % 8;       // Get remainder (octal digit)
        ans = rem * mul + ans; // Build the octal number
        mul *= 10;         // Shift position
        n = n / 8;         // Reduce the number
    }

    cout << "Octal: " << ans << endl;
    return 0;
}

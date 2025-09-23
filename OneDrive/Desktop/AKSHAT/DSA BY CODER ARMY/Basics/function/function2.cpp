#include <iostream>
using namespace std;

// Function to reverse the digits of a positive integer
int reverseDigits(int x) {
    int rem, ans = 0;
    while (x != 0) {
        rem = x % 10;
        x = x / 10;
        ans = ans * 10 + rem;
    }
    return ans;
}

// Wrapper function to validate input and call reverseDigits
int reverse(int x) {
    if (x < 0) {
        cout << "Enter a positive number" << endl;
        return -1;
    }
    return reverseDigits(x);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = reverse(num);
    if (result != -1)
        cout << "Reversed number: " << result << endl;

    return 0;
}


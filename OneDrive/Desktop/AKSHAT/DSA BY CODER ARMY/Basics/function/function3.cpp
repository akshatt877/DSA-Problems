#include <iostream>
using namespace std;

// Function to swap two numbers using multiplication and division
void swapNumbers(int &a, int &b) {
    if (a == 0 || b == 0) {
        cout << "Cannot swap using multiplication/division when one value is zero." << endl;
        return;
    }

    a = a * b; //stores product
    b = a / b; // stores original b value
    a = a / b; //stores original a value
}

int main() {
    int a = 7, b = 3;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swapNumbers(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no of rows ";
    cin>>n;
    
    for (int i = 1; i <= n; i++) {
    // spaces
    for (int space = 0; space < n - i; space++) {
        cout << "  ";
    }

    // numbers from n down to (n - i + 1), OR:
    for (int num = n; num > n - i; num--) {
        cout << num << " ";
    }

    cout << endl;
}

    return 0;
}
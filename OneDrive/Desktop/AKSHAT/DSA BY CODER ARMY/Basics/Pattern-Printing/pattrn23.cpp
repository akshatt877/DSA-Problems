#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows:";
    cin>>row;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=(row-i);j++ ){
            cout<<" ";
        }

        char ch= 'A';
        for(int j=1; j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch << " ";
            ch--;
        }
        cout<<endl;
    }
    return 0;
}

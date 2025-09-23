#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the row ";
    cin>>row;

    for (int i=1; i<=row;i++){
        //for space
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //for star
        for(int k=1;k<=2*(row-i)+1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}



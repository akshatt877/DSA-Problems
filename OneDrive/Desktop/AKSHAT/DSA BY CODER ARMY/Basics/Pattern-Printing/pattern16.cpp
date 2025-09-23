#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the rows and columns :"<<endl;
    cin>>row>>column;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=(row-i);j++){
            cout<<" ";
        }

        for(int k=1;k<=(2*i-1); k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

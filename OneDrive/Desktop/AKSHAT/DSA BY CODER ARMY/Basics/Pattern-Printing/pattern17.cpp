#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the rows and columns :"<<endl;
    cin>>row>>column;

    for(int i=1;i<=row;i++){
        //space
        for(int j=1;j<=(row-i);j++){
            cout<<" ";
        }
        //1 to row 
        for(int k=1;k<=i; k++){
            cout<<k<<" ";
        }
        // row-1 to 1
        for(int l=i-1;l>=1;l--){
            cout<<l<<" ";
        }
        cout<<endl;
    }

    return 0;
}
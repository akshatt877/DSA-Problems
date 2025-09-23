#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the rows and columns :"<<endl;
    cin>>row>>column;

    for(int i=1;i<=row;i++){
        //for loop for space
        for(int j=1 ;j<=(row-i); j++){
            cout<<" ";
        }

        //for loop for numbers
        for(int k=i; k>=1 ; k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
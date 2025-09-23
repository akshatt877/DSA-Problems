#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the rows and columns :"<<endl;
    cin>>row>>column;

    for(int i=0;i<row;i++){
        for(int j=0;j<(row-i);j++){
            cout<<" ";

        }
        for(int k=0; k<i ;k++){
            cout<<"*";
        }
        cout<<endl;
       
    }

   return 0;
}
#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the no of rows and columns :";
    cin>>row>>column;

    for(int i=0; i<row; i++){
        cout<<endl;
        for(int j=0;j<column;j++){
            cout<<" "<<j*j*j;
        }
    }
    return 0;
}
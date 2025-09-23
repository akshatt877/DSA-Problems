#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the rows and column number;"<<endl;
    cin>>row>>column;

    for(int i=1;i<row;i++){
        cout<<endl;
        for(int j=1;j<column;j++){
            cout<<" "<<j*j;
        }
    }
    return 0;
}
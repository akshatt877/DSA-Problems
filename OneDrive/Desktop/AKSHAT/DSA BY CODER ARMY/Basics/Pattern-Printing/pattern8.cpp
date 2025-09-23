#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the rows and columns :"<<endl;
    cin>>row>>column;

    //int num = 10;
    for(int i=1;i<row;i++){
        for(int j=10; j<(10+i); j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Entter the rows and columns :"<<endl;
    cin>>row>>column;


    for(int i=0;i<row;i++){
        for(char j='A'; j<'A' + i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
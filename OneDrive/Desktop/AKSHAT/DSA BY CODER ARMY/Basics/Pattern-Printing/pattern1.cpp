
#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the row and columns "<<endl;
    cin>>row>>col;

    for(int i=0; i<row; i++){
        cout<<endl;
        for(int j=0; j<col ; j++){
            cout<<"4";
        }
    }
    return 0;
}
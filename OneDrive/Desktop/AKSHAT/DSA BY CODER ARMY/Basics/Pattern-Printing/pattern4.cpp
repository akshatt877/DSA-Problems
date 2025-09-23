#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter the rows andd columns"<<endl;
    cin>>row>>column;

    
    for(int i=0;i<row;i++){
        cout<<endl;
        for(char name='F'; name<='K'; name++){
            cout<<name;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the no of row";
    cin>>rows;

    for(int i=1;i<rows;i++){
        //for space
        for(int j=1;j<=(rows-i);j++){
            cout<<" ";

        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<k;
        }
        cout<<endl;


    }
    return 0;
}
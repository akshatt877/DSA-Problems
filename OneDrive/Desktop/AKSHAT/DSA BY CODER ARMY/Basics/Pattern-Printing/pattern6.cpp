#include<iostream>
using namespace std;
//Right handed triangle
int main(){
    int row,column;
    cout<<"enter the rows and columns";
    cin>>row>>column;

    for(int i=1; i<=row ; i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
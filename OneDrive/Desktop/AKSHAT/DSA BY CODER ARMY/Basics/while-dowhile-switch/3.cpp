#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    
    switch(n){
        case 1:
        cout<<"Jan";
        break;
        case 2:
        cout<<"Feb";
        break;
        default:
        cout<<"Will be updated";
    }
    return 0;
}


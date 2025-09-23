#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;

    if(num>0 && num%2==0){
        cout<<"Number is positive and even";
    }
    else{
        cout<<"Number is odd and negative also";
    }
    return 0;
}
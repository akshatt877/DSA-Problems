#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the No whose divisibilty should be checked" <<endl;
    cin>> n;

    if(n%4==0){
        cout<< "Number is divisible by 4 ";
    }else{
        cout<< "Number is not divsible by 4" ; 
    }
    return 0;
}
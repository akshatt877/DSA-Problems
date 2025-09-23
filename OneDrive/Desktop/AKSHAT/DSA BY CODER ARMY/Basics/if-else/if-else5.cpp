#include<iostream>
using namespace std;

int main(){

    int n,factorial=1;
    cout<< "Enter the number whose factorial you have to find" <<endl;
    cin>> n;

    for(int i=1; i<=n ; i=i+1){
        factorial = factorial*i;
    }

    cout<<factorial<<endl;


    return 0;
}
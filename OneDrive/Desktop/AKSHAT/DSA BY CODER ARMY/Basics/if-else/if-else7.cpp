#include<iostream>
using namespace std;

int main(){
    int number,sum=0;
    cout<<"Enter the n natural numbers "<<endl;
    cin>>number;

    for(int i=1;i<=number;i++){
        sum = sum + i*i;
    }

    cout<<"Sum of the squares of the natural numbers is"<<sum<<endl;

}
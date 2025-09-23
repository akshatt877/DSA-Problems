#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;

    int i=1;
    while(i<=n){
        if(i%2==0){
            cout<<"Even number is"<<i;
        }else{
            cout<<" Odd number is:"<<i<<endl;
        }
        i++;
    }
    return 0;
}
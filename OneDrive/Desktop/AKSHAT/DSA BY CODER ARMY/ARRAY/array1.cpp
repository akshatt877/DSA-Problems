#include<iostream>
using namespace std;

int main(){
    int arr[100];
    cout<<"Enter the elements for the array";
    
    int sum=0;

    for(int i=0;i<=5;i++){
        cin>>arr[i];
        sum += arr[i];
    }

     cout<<sum;

    return 0;
}
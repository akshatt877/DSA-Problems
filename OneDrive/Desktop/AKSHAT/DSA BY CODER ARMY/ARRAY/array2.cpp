#include<iostream>
using namespace std;

int main(){
    int arr[18];
    cout<<"Enter the elements for the array";
    
    int sum=0;
    int average=0;

    for(int i=0;i<18;i++){
        cin>>arr[i];
        sum += arr[i];
        average = (sum)/18;
    }

     cout<<average;

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of the array";
    cin>>size;

    int arr[100];

    int target;
    cout<<"enter the target";
    cin>>target;

    cout<<"Enter the elements for the array";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        if(arr[i]!= target){
            cout<<i<<"-1";
        }else {
            cout<<"1";
        }
    }


     

    return 0;
}
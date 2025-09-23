#include<iostream>
using namespace std;

int main(){

    int arr[10];
    int n;
    cin>>n;

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
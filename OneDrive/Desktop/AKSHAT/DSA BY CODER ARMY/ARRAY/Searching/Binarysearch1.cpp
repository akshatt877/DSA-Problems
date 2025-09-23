#include<iostream>
using namespace std;

int main(){
    int arr[50];
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //binary sorting 
    int target;
    cout<<"Enter the target";
    cin>>target;

    int low=0;
    int high=n-1;

    while(low<=high){
        int mid = low + (high - low)/2;
    if(arr[mid] == target){
        cout<<mid;
        break;
    }else if(arr[mid]<target){
        low = mid+1;
        cout<<low;
        break;
    }else {
        high = mid-1;
        cout<<high;
        break;
     }
    }
    return -1;
}
        

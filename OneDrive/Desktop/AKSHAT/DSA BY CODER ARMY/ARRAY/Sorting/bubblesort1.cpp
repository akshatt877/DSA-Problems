//Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last

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

    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
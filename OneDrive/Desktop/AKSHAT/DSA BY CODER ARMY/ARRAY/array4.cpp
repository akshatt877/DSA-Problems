#include<iostream>
#include <climits>

using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the elements of the array";

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int max = INT_MIN;
    int second_max = INT_MIN;

    for(int i = 0; i < 5; i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if(arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    return 0;
}
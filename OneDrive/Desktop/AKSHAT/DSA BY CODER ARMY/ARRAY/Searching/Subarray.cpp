#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr)
{
    int maxi= INT32_MIN,prefix=0, totalsum=0,n=arr.size();
    
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
    }

    for(int i=0;i<n-1;i++){
        prefix += arr[i];
        if(totalsum == 2*prefix){
            return 1;
        }
    }
    return 0;
}
int main(){
    int  n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    vector<int>v(n);
    cout<<"Enter the element in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<divide(v);
    return 0;
}
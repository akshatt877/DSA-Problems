#include<iostream>
using namespace std;

int main(){
    int n,pow,output;
    cout<<"Number whose power you want to find" <<endl;
    cin>>n;
    cout<<"Number of power"<<endl;
    cin>>pow;


    output=n;
    for(int i=1; i<pow ;i=i+1){
        output = output*n;
    } 

    
    cout<<output<<endl;
    
    
    return 0;
}
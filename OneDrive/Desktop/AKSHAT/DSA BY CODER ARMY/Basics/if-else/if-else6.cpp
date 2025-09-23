#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of terms for the series" << endl;
    cin>>n;
    int current,t1=0, t2=1;

    for(int i=1 ; i<= n ;i++){
        if(i==1){
            cout<<t1<<endl;
        }
        else if(i==2){
            cout<<t2<<endl;
        }

        current = t1 + t2;
        t1 = t2;
        t2 = current;

        cout<<current<<endl;
        
    }
    return 0;
}
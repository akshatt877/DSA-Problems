#include<bits/stdc++.h>
using namespace std;

int Armstrong(int x,int digit){
     int n=x,rem,ans=0;
     while(x!=0){
        rem= x%10;
        x=x/10;
        int power=1;
        for(int i=0;i<digit;i++){
            power*=rem;
        }

        ans = ans + power;
     }

     if(ans==n){
        return 1;
     }else {
        return 0;
     }
}

int count(int x){
    int count = 0;   
    while(x!=0){
        count++;
        x=x/10;
    }
    return count;
}

int main(){

    int n;
    cout<<"Enter the number for armstrong check"<<endl;
    cin>>n;

    int digit = count(n);
    //cout<<digit;
    int result = Armstrong(n,digit);
    cout<<result<<endl;

    return 0;
}
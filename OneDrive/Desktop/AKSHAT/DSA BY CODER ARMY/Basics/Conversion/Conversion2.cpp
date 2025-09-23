// to Octal to decimal

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter  the number";
    cin>>n;
    int rem,mul=1,ans=0;

    while(n>0){
        rem=n%10;
        n = n/10;
        ans = rem*mul + ans;
        mul *= 8;
        //n = n/10;

    }

    cout<<ans;

    return 0;
}
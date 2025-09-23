//Decimal to Binary

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;

    int rem,ans=0,mul=1;

    while(n>0){
        rem = n%2;//remainder
        n/=2; //quotient
        ans +=rem*mul; //final result(ans = ans+ rem*null)
        mul *=10; //decides power of 10

    }

    cout<<ans<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a,b,c value";
    cin>>a>>b>>c;

    if(a>b && a>c)
    cout<<"a is greater than both";
    else if(b>a && b>c)
    cout<<"b is greater than both a and c";
    else cout<<"c is greater than both";
    return 0;
}
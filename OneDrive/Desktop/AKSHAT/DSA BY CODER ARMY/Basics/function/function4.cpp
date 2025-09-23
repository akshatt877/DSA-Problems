#include<iostream>
using namespace std;

char convert(char x){
     char res = x - 'a' + 'A';
     return res;
}
int main(){
    char name;
    cin>>name;

    char result = convert(name);
    cout<<result;
    return 0;
}
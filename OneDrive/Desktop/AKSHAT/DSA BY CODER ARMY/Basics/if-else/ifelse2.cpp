#include<iostream>
using namespace std;


int main(){

    int n;
    cout<< "Enter the number " << endl;
    cin>>n;
    if(n==1){
        cout<<"January"<<endl;
    }
    else if(n==2) {
        cout<< "February" <<endl;
    }
    else if(n==3){
        cout<< "March" <<endl;
    }
    else if(n==4){
        cout<< "April" <<endl;
    }
    else{
        cout<< "Answer will be updated soon" <<endl;
    }
    return 0;
}

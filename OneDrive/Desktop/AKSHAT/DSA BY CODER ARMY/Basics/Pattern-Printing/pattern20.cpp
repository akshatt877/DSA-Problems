#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the rows";
    cin>>row;

    for(int i=1;i<=row;i++){
        //*print
        for(int j=1;j<=i;j++)
        cout<<"*";
        //Space print
        for(int k=1;k<=2*row-2*i;k++)
        cout<<" ";

        //*print
        for(int l=1;l<=i;l++)
        cout<<"*";
        cout<<endl;


    }

    for(int i=row-1;i>=1;i--){
        //*print
        for(int j=1;j<=i;j++)
        cout<<"*";
        //Space print
        for(int k=1;k<=2*row-2*i;k++)
        cout<<" ";

        //*print
        for(int l=1;l<=i;l++)
        cout<<"*";
        cout<<endl;

        
    }
    return 0;
}

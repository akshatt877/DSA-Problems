#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the rows";
    cin>>row;
    

    //upper half
    for(int i=1;i<=row;i++){
        //print space
        for(int j=1;j<=(row-i);j++)
        cout<<" ";

        //print  stars
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //lower half
    for(int i=(row-1);i>=1;i--){
        //print spaces
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }

        // Print stars at alternate positions
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
         cout << endl;
    }
    return 0;

}
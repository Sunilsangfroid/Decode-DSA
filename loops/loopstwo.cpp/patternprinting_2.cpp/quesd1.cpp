#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    int k=1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=r;k++){
            cout<<"*";
        }
        cout<<endl;
    }
            
}
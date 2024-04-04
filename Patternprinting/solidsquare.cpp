#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows/columns: ";
    int a ;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
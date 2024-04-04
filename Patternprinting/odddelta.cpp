#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows: ";
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        //first i odd numbers
        for(int j=1;j<=2*i-1;j=j+2){
            cout<<j;
        }
        cout<<endl;
    }
}
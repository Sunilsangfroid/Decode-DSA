#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows/columns: ";
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        cout<<i<<" ";
        for(int j=1;j<=r;j++){
            cout<<j;
        }
    cout<<endl;
    }
}
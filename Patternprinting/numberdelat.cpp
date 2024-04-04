#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows: ";
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r+1-i;j++){
            cout<<j;
        }
    cout<<endl;
    }
}

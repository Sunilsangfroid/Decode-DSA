#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    int mid=r/2 + 1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(i==j || i==(r+1-j)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
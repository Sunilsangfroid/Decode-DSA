#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=(2*i)-1;k+=3){
            cout<<" ";
        }
        for(int l=n;l>=1;l--){
            cout<<"*";
        }
        cout<<endl;
    }
}

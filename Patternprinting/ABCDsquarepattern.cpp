#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows: ";
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=97;j<=97+r;j++){
            cout<<char(j);
        }
    cout<<endl;
    }
}

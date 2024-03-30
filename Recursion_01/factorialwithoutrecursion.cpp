#include<iostream>
using namespace std;
void factupto(int n){
    for(int j=1;j<=n;j++){
        int f=1;
        for(int i=2;i<=j;i++){
            f*=i;
        }
        cout<<f<<endl;
    }
}
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    factupto(n);
}
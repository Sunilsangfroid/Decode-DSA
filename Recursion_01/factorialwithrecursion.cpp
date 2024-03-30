#include<iostream>
using namespace std;
void factupto(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<i<<": "<<f<<endl;
    }
}
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    factupto(n);
}
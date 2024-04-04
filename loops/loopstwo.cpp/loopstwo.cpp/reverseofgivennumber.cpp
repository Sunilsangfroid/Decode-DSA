#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number; ";
    int n;
    cin>>n;
    int b;
    int r=0;
    while(n>0){
        r=r*10;
        b=n%10;
        r+=b;
        n/=10;
    }
    cout<<r;
}
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    int factorial=1;
    if(n==0){
        cout<<"Factorial= 0 ";
        break;
    }
    
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<factorial;
}
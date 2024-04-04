#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    int a=1,b=1;
    int fibonacci=1;
    for(int i=1;i<=n-2;i++){
        fibonacci=a+b;
        a=b;
        b=fibonacci;
        cout<<fibonacci<<endl;
    }
    
}
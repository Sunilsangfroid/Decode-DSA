#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the base: ";
    int n;
    cin>>n;
    cout<<"Enter the exponent: ";
    int p;
    cin>>p;
    int value=1;
    if(p<0){
        p=-p;
        for(int i=1;i<=p;i++){
            value=1/(value*n);
        }
        cout<<value;
    }
    else{
        for(int i=1;i<=p;i++){
            value=value*n;
        }
        cout<<value;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=100;
    for(int i=0;i<=n;i++){
        a=a-3;
        if(a>0){
            cout<<a<<endl;
        }
    }
}
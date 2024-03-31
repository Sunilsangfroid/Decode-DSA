#include<iostream>
using namespace std;
int main(){
    char str[]={'a','b','c','d','e'}; //we can't write char str[5]="abcde"
    for(int i=0;i<=4;i++){
        cout<<str[i]<<" ";
    }
    cout<<"My name is Sunil"; //string
}
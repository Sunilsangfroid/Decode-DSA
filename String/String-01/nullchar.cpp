#include<iostream>
using namespace std;
int main(){
    // char sd[10]={'a','b','c','d','e'};
    // cout<<int(sd[5]);
    char str[]={'a','b','c','d','e'};
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str;
}
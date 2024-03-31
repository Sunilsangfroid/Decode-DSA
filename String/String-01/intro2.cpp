#include<iostream>
using namespace std;
int main(){
    char otp[5]="abcd";
    for(int i=0;i<5;i++){
        cout<<otp[i]<<" ";
    }
    cout<<"abc\ndef"<<endl;
    cout<<"abc\tdef";
    char ch='\0'; //special null character having ascii value zero
    cout<<ch;
}
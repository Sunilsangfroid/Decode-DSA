#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="subhashree";
    for(int i=0;s[i]!='\0';i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<s;
}

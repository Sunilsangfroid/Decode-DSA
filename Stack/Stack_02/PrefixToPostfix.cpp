#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
string solve(string val1,string val2,char ch){
    string p="";
    p+=val1;
    p+=val2;
    p+=ch;
    return p;
}
int main(){
    string s="-/*+79483";
    stack<string>val;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top();
}
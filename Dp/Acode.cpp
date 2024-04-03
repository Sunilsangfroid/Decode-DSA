#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
vector<int>dp;
int f(string &s,int i){
    if(i<=0) return 1;
    if(dp[i]!=-1) return dp[i];
    int ans=0;
    if(s[i]-'0'>=0){
        ans+=f(s,i-1);
    }
    if(s[i-1]-'0'>=0 and (s[i-1]-'0')*10+(s[i]-'0')<=26){
        ans+=f(s,i-2);
    }
    return dp[i]=ans;
}
int main(){
    string s;
    cin>>s;
    dp.resize(5005,-1);
    cout<<f(s,s.size()-1);
}
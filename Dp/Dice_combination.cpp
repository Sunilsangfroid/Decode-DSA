#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>dp(10000005,-1);
ll f(int n){
    if(n==0) return 1;
    if(dp[n]!=-1)return dp[n];
    int ans=0;
    for(int i=1;i<=6;i++){
        if(n-i < 0) break;
        ans+=f(n-i);
    }
    return dp[n]=ans;
}
ll fbu(int n){
    dp[0]=1;
    for(int k=1;k<=n;k++){
        ll sum=0;
        for(int i=1;i<=6;i++){
            if(k-i <0) break;
            sum+=dp[k-i];
        }
        dp[k]=sum;
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<fbu(n);
}
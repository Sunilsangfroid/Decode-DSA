#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>coins;
vector<int>dp;
int f(int x){
    int result=INT_MAX;
    if(x==0) return 0;
    if(dp[x]!=-1) return dp[x];
    for(int i=0;i<coins.size();i++){
        if(x-coins[i]<0) continue;
        result=min(result,f(x-coins[i]));
    }
    return dp[x]=1+result;
}
int fbu(int x){
    dp[0]=0;
    for(int i=1;i<=x;i++){
        int result=INT_MAX;
        for(int j=0;j<coins.size();j++){
            if(i-coins[j]<0) continue;
            result=min(result,dp[i-coins[j]]);
        }
        dp[i]=1+result;
    }
    return dp[x];
}
int main(){
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        coins.push_back(a);
    }
    dp.resize(100005,-1);
    cout<<fbu(x);
}
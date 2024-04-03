#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>dp(1000005);
int main(){
    int k,l;
    cin>>k>>l;
    dp[1]=1;
    dp[k]=1;
    dp[l]=1;
    for(int i=0;i<dp.size();i++){
        if(i==k or i==l or i==1) continue;
        dp[i]=!(dp[i-1] and ((i-k>=1) ? dp[i-k] : 1) and ( (i-l>=1) ? dp[i-l] : 1));
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int p;
        cin>>p;
        if(dp[p]==0) cout<<"B";
        else cout<<"A";
    }
}
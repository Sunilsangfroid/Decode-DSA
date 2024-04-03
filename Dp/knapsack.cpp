#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp(1005,vector<int>(100005,-1));

int f(vector<int>&w,vector<int>&v,int idx,int W){
    if(idx==w.size()-1) return 0;
    if(dp[idx][W]!=-1) return dp[idx][W];
    int ans=INT_MIN;
    ans=max(ans,f(w,v,idx+1,W));
    if(w[idx]<=W){
        ans=max(ans,v[idx]+f(w,v,idx+1,W-w[idx]));
    }
    return dp[idx][W]=ans;
}
int fbu(vector<int>&w,vector<int>&v,int W){
    dp.clear();
    dp.resize(105,vector<int>(100005,0));
    int n=w.size();
    for(int idx=n-1;idx>=0;idx--){
        for(int j=0;j<=W;j++){
            int ans=INT_MIN;
            ans=max(ans,dp[idx+1][j]);
            if(w[idx]<=j){
                ans=max(ans,v[idx]+dp[idx+1][j-w[idx]]);
            }
            dp[idx][j]=ans;
        }
    }
    return dp[0][W];
}
int main(){
    cout<<dp.size();
    int n, W;
    cin>>n>>W;
    vector<int>wts,values;
    for(int i=0;i<n;i++){
        int w,v;
        cin>>w>>v;
        wts.push_back(w);
        values.push_back(v);
    }
    cout<<fbu(wts,values,W);
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp(105,vector<int>(100005,-1));

int f(vector<int>&w,vector<int>&v,int idx,int tv){
    if(tv==0) return 0;
    if(idx==w.size()) return INT_MAX; 
    if(dp[idx][tv]!=-1) return dp[idx][tv];
    int ans=INT_MAX;
    ans=min(ans,f(w,v,idx+1,tv));
    if(v[idx]<=tv){
        ans=min(ans,w[idx]+f(w,v,idx+1,tv-v[idx]));
    }
    return dp[idx][tv]=ans;
}
// int fbu(vector<int>&w,vector<int>&v,int W){
//     dp.clear();
//     dp.resize(105,vector<int>(100005,0));
//     int n=w.size();
//     for(int idx=n-1;idx>=0;idx--){
//         for(int j=0;j<=W;j++){
//             int ans=INT_MIN;
//             ans=max(ans,dp[idx+1][j]);
//             if(w[idx]<=j){
//                 ans=max(ans,v[idx]+dp[idx+1][j-w[idx]]);
//             }
//             dp[idx][j]=ans;
//         }
//     }
//     return dp[0][W];
// }
int main(){
    int n, W;
    cin>>n>>W;
    vector<int>wts,values;
    for(int i=0;i<n;i++){
        int w,v;
        cin>>w>>v;
        wts.push_back(w);
        values.push_back(v);
    }
    int result=-1;
    for(int i=0;i<=n*1000;i++){
        if(f(wts,values,0,i)<=W){
            result=i;
        }
    }
    cout<<result;
}
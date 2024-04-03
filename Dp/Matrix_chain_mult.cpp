#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int f(int i,int j,vector<int>& a){
    if(i==j or i+1==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=INT_MAX;
    for(int k=i+1;k<j;k++){
        ans=min(ans,f(i,k,a)+f(k,j,a)+(a[i]*a[j]*a[k]));
    }
    return dp[i][j]=ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    dp.clear();
    dp.resize(1005,vector<int>(1005,-1));
    cout<<f(0,n-1,arr);
}

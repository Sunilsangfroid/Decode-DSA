#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>colors;
vector<vector<int>>dp;
int g(int i,int j){
    
    int result=0;
    for(int k=i;k<=j;k++){
        result=((result%100)+(colors[k]%100))%100;

    }
    return result;
}
int f(int i,int j){
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=INT_MAX;
    for(int k=i;k<=j-1;k++){
        ans=min(ans,(f(i,k)+f(k+1,j)+g(i,k)*g(k+1,j)));
    }
    return dp[i][j]=ans;
}
int main(){
    int  n;
    cin>>n;
    dp.resize(105,vector<int>(105,-1));
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        colors.push_back(x);
    }
    cout<<f(0,n-1);
}
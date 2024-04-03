#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
double dp[3005][3005];
double f(vector<double> &coin,int i,int x){
    if(x==0) return 1;
    if(i==-1) return 0;
    if(dp[i][x]>-0.9) return dp[i][x];
    return dp[i][x] = (f(coin,i-1,x-1)*(coin[i]))+(f(coin,i-1,x)*(1-coin[i]));
}
int main(){
    int n;
    cin>>n;
    vector<double>coin(n);
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    cout<<fixed<<setprecision(8)<<f(coin,n-1,(n+1)/2);
}
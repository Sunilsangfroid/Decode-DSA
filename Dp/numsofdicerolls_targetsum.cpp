//https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/
#include<iostream>
#include<vector>
#define ll long long
#define mod 1000000007
using namespace std;
class Solution {
public:
vector<vector<ll>>dp;
int f(int n,int k,int target){
    if(n==0 and target==0) return 1;
    if(n==0) return 0;
    ll ans=0;
    if(dp[n][target]!=-1) return dp[n][target];
    for(int i=1;i<=k;i++){
        if(target-i <0) continue;
        ans=((ans%mod )+ f(n-1,k,target-i)%mod)%mod;
    }
    return dp[n][target]=ans%mod;
}
    int numRollsToTarget(int n, int k, int target) {
        dp.resize(35,vector<ll>(100005,-1));
        return f(n,k,target);
    }
};
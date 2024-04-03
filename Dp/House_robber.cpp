//https://leetcode.com/problems/house-robber/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>dp;

    int fun(vector<int>&arr,int i){
        int n=arr.size();
        if(i==n-1) return arr[i];
        if(i==n-2) return max(arr[i],arr[i+1]);
        return max((arr[i]+fun(arr,i+2)),0+fun(arr,i+1));
    }
    // Top-Down
    int f(vector<int>&arr,int i){
        int n=arr.size();
        if(i==n-1) return arr[i];
        if(i==n-2) return max(arr[i],arr[i+1]);
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max((arr[i]+f(arr,i+2)),0+f(arr,i+1));
    }
    //Bottom-up
    int fbu(vector<int>&arr){
        dp.clear();
        dp.resize(105,-1);
        int n=arr.size();
        if(n==1) return arr[0];
        dp[n-1]=arr[n-1];
        dp[n-2]=max(arr[n-2],arr[n-1]);
        for(int i=n-3;i>=0;i--){
            dp[i]=max(dp[i+1],arr[i]+dp[i+2]);
        }
        return dp[0];
    }
    int rob(vector<int>& nums) {
        dp.resize(nums.size()-1,-1);
        return f(nums,0);
    }
};
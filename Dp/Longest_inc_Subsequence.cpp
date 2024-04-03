//https://leetcode.com/problems/longest-increasing-subsequence/submissions/1163804860/
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int>arr;
    vector<int>dp;
    int f(int i){
        if(i==0) return 1;
        
        int an=INT_MIN;
        if(dp[i]!=-1) return dp[i];
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                an=max(an,f(j));
            }
        }
        if(an==INT_MIN) return dp[i]=1;
        return dp[i]=1+an;

    }
    int lengthOfLIS(vector<int>& nums) {
        arr=nums;
        dp.resize(2505,-1);
        dp[0]=1;
        int ans=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     ans=max(ans,f(i));
        // }
        // return ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
            if(dp[i]==-1) dp[i]=1;
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
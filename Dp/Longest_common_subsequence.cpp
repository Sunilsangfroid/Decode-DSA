//https://leetcode.com/problems/longest-common-subsequence/
#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<long long>>dp;
    long long f(string &s1,string &s2,int i,int j){
        if(i>=s1.length()) return 0;
        if(j>=s2.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]){
            return dp[i][j]=1+(f(s1,s2,i+1,j+1));
        }
        else return dp[i][j]=max(f(s1,s2,i+1,j),f(s1,s2,i,j+1));
    }
    int longestCommonSubsequence(string text1, string text2) {
        dp.clear();
        dp.resize(1005,vector<long long>(1005,-1));
        return f(text1,text2,0,0);
    }
};
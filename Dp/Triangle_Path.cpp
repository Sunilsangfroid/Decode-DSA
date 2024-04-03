//https://leetcode.com/problems/triangle/description/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>t;
    vector<vector<int>>dp;
    int f(int r,int c){
        if(r==t.size()-1) return t[r][c];
        if(dp[r][c]!=-1) return dp[r][c];
        return dp[r][c]=t[r][c]+min(f(r+1,c),f(r+1,c+1));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        dp.resize(205,vector<int>(205,0));
        t=triangle;
        // return f(0,0);
        for(int i=0;i<triangle.size();i++){
            dp[triangle.size()-1][i]=t[triangle.size()-1][i];
        }
        for(int i=triangle.size()-2;i>=0;i--){
            for(int j=0;j<t[i].size();j++){
                dp[i][j]=t[i][j]+min((dp[i+1][j]),(dp[i+1][j+1]));
            }
        }
        return dp[0][0];
    }
};
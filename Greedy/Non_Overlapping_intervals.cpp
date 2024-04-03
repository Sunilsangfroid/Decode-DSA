//https://leetcode.com/problems/non-overlapping-intervals/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        sort(intervals.begin(),intervals.end(),cmp);
        int lastendtime=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<lastendtime){
                ans++;
            }
            else{
                lastendtime=intervals[i][1];
            }
        }
        return ans;
    }
};



bool cmp(vector<int>&a,vector<int>&b){
    return a[0]<b[0];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        sort(intervals.begin(),intervals.end(),cmp);
        int lastendtime=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<lastendtime){
                ans++;
                lastendtime=min(intervals[i][1],lastendtime);
            }
            else{
                lastendtime=intervals[i][1];
            }
        }
        return ans;
    }
};
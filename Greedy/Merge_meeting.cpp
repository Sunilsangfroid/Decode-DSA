//https://leetcode.com/problems/merge-intervals/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a ,vector<int>&b){  //T.C=O(nlogn)
    return a[0]<b[0];   // we can sort on basis of ending time, and travere from right to left to escape from conflict
}// but, here we sort on the basis of starting time so we have to traverse here from left to right
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>>result;
        result.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            vector<int>currint=intervals[i];
            if(currint[0]<=result[result.size()-1][1]){
                result[result.size()-1][0]=min(currint[0],result[result.size()-1][0]);
                result[result.size()-1][1]=max(currint[1],result[result.size()-1][1]);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};
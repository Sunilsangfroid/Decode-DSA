//https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans=0;
        sort(points.begin(),points.end(),cmp);
        vector<vector<int>>result;
        result.push_back(points[0]);
        int lastpoint=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]>lastpoint){
                lastpoint=points[i][1];
                result.push_back(points[i]);
            }
            else{
                lastpoint=min(lastpoint,points[i][1]);
            }
        }
        return result.size();
    }
};
//https://leetcode.com/problemset/?page=1&search=253
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMeetingRooms(vector<vector<int>> &intervals) {
        vector<int>start,ending;
        for(auto el : intervals){
            start.push_back(el[0]);
            ending.push_back(el[1]);
        }
        sort(start.begin(),start.end());
        sort(ending.begin(),ending.end());
        int ans=0;
        int rooms=0;
        int i=0,j=0;
        while(i<start.size() and j<ending.size()){
            if(start[i]<ending[j]){
                rooms++;
                ans=max(ans,rooms);
                i++;
            }
            else if(start[i]>ending[j]){
                rooms--;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return ans;
        // Write your code here
    }
};
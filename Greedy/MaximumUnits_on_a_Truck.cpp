// https://leetcode.com/problems/maximum-units-on-a-truck/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
bool cmp(vector<int>&p1,vector<int>&p2){
    return p1[1]>p2[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        double result=0;
        for(int i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0]<truckSize){
                truckSize-=boxTypes[i][0];
                result+=(boxTypes[i][1]*boxTypes[i][0]);
            }
            else{
                result+=(boxTypes[i][1]*truckSize);
                truckSize=0;
                break;
            }
        }
        return result;
    }
};
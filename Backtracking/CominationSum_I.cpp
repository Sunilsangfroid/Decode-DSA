//https://leetcode.com/problems/combination-sum/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>results;
    void f(vector<int>& candidates, int target,int idx,vector<int>& subset){
        if(target==0){
            results.push_back(subset);
            return;
        }
        if(idx==candidates.size()) return;
        if(candidates[idx]<=target){
            subset.push_back(candidates[idx]);
            f(candidates,target-candidates[idx],idx,subset);
            subset.pop_back(); //VIP Step :)
        }
        int id=idx+1; //LEO STEP (:)
        f(candidates,target,id,subset);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        results.clear();
        vector<int>subsets;
        f(candidates,target,0,subsets);
        return results;
    }
};
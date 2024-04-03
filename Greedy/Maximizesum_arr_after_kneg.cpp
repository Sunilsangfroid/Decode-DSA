#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {  //O(klogn+n)-------> T.C
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end()); //O(n)------->S.C
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        while(k--){
            int pw=pq.top();
            if(pw==0) break;
            pq.pop();
            pq.push(-1*pw);
            sum-=pw;
            sum+=(-1*pw);
        }
        return sum;
    }
};
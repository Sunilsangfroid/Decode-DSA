//https://leetcode.com/problems/construct-string-with-repeat-limit/submissions/1151259943/
#include<iostream>
#include<queue>
#include<vector>
#include<bits/stdc++.h>
#include<map>
using namespace std;
class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<char,int>>pq;
        for(auto p : mp){
            pq.push(p);
        }
        string result="";
        while(!pq.empty()){
            auto largest=pq.top();
            pq.pop();
            int len=min(largest.second,repeatLimit);
            for(int i=0;i<len;i++){
                result+=largest.first;
            }
            pair<char,int>secondlargest;
            if(largest.second-len > 0){
                if(!pq.empty()){
                    secondlargest=pq.top();
                    result+=secondlargest.first;
                    pq.pop();
                }
                else{
                    return result;
                }
                if(secondlargest.second-1>0){
                    pq.push({secondlargest.first,secondlargest.second-1});
                }
                pq.push({largest.first,largest.second-len});
            }
        }
        return result;
        
    }
};

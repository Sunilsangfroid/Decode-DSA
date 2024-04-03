//https://leetcode.com/problems/rabbits-in-forest/
#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
#define ll long long
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mp;
        int result=0;
        for(int i=0;i<answers.size();i++){
            if(!mp[answers[i]+1]){
                result += answers[i] + 1;
                if(answers[i]==0) continue;
                mp[answers[i]+1]=1;
            }
            else{
                mp[answers[i]+1]++;
                int key=answers[i]+1;
                int value=mp[key];
                if(key==value){
                    mp.erase(key);
                }
            }
        }
        return result;
    }
};
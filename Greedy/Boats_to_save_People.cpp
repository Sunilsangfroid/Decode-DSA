// https://leetcode.com/problems/boats-to-save-people/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int j=people.size()-1;
        int trips=0;
        while(i<=j){
            if(people[j]+people[i] <=limit){
                i++;
                j--;
                trips++;
            }
            else{
                j--;
                trips++;
            }
        }
        return trips;
    }
};
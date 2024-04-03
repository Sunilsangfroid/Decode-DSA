#define pp pair<int,int>
#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
bool cmp(pp &p1,pp &p2){
    double r1=(p1.first*1.0)/(p1.second*1.0);
    double r2=(p2.first*1.0)/(p2.second*1.0);
    return r1>r2;
}
int Maximum_fractional_knapsack(vector<int>&value,vector<int>&weights,int n,int w){
    vector<pp>arr;
    for(int i=0;i<n;i++){
        arr.push_back({value[i],weights[i]});
    }
    double profit=0;
    sort(arr.begin(),arr.end(),cmp);
    for(int k=0;k<arr.size();k++){
        if(arr[k].second<=w){
            profit+=arr[k].first;
            w-=arr[k].second;
        }
        else{
            profit+=((arr[k].first*1.0)/(arr[k].second*1.0))*w;
            w=0;
            break;
        }
    }
    return profit;
}
int main(){
    vector<int>values={60,100,120};
    vector<int>weights={10,20,30};
    int n=3;
    int w=50;
    cout<<Maximum_fractional_knapsack(values,weights,n,w);
}
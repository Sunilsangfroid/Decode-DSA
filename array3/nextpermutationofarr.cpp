#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int nums[]={2,3,1};
    int n=sizeof(nums)/sizeof(nums[0]);
    vector<int>v(nums,nums+n);
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
    }
    else{
        reverse(v.begin()+idx+1,v.end());
        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(v[i]>v[idx]){
                j=i;
                break;
            }
        }
        swap(v[idx],v[j]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

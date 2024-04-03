#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
ll minimum_cost_to_BreaktheGrid(vector<ll>&vertical,vector<ll>&horizontal){
    sort(horizontal.begin(),horizontal.end(),cmp);
    sort(vertical.begin(),vertical.end(),cmp);
    int hz=1;
    int vr=1;
    int h=0;
    int v=0;
    ll ans=0;
    while(h<horizontal.size() and v<vertical.size()){
        if(horizontal[h]<vertical[v]){
            ans += vertical[v]*vr;
            hz++;
            v++;
        }
        else{
            ans += horizontal[h]*hz;
            vr++;
            h++;
        }
    }
    while(h<horizontal.size()){
        ans += horizontal[h]*hz;
        vr++;
        h++;
    }
    while(v<vertical.size()){
        ans += vertical[v]*vr;
        hz++;
        v++;
    }
    return ans;
}
int main(){
    int m, n;
    cin>>m>>n;
    vector<ll>hori,verti;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        hori.push_back(x);
    }
    for(int j=0;j<m-1;j++){
        int y;
        cin>>y;
        verti.push_back(y);
    }
    cout<<minimum_cost_to_BreaktheGrid(hori,verti);
}

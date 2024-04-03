#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n+1,0);
    for(int i=1;i<=m;i++){
        int l,r;
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(int j=1;j<=n;j++){
        v[j]+=v[j-1];
    }
    vector<int>coins(10000005,0);
    for(int i=1;i<v.size();i++){
        coins[v[i]]++;
    }
    for(int q=coins.size();q>=0;q--){
        coins[q]+=coins[q+1];
    }
    for(int i=0;i<m;i++){
        int p;
        cin>>p;
        cout<<coins[p]<<endl;
    }
}
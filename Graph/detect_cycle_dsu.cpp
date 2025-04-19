#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& parent,int a){
    return parent[a]=(parent[a]==a ? a:find(parent,parent[a]));
}
bool Union(vector<int>& parent,vector<int>& rank,int a,int b){
    a=find(parent,a);
    b=find(parent,b);
    if(a==b) return true;
    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;
    }
    else{
        rank[b]++;
        parent[a]=b;
    }
    return false;
}
int main(){
    int v,e;
    cin>>v>>e;
    vector<int>parent(v,-1);
    vector<int>rank(v,0);
    for(int i=0;i<v;i++) parent[i]=i;
    while(e--){
        int a,b;
        cin>>a>>b;
        bool bi=Union(parent,rank,a,b);
        if(bi) cout<<"Cycle is detected"<<endl;
    }
    return 0;
}
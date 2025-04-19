#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
vector<vector<int>>store;
unordered_set<int>visit;
void add_edge(int src,int dst){
    graph[src].push_back(dst);
    graph[dst].push_back(src);
}
void dfs(int curr,int end,vector<int>& v){
    if(curr==end){
        v.push_back(curr);
        store.push_back(v);
        v.pop_back();
        return;
    }
    visit.insert(curr);
    v.push_back(curr);
    for(auto c:graph[curr]){
        if(not visit.count(c)){
            dfs(c,end,v);
        }
    }
    v.pop_back();
    visit.erase(curr);
    return;
}
void ans(int curr,int end){
    vector<int>v;
    dfs(curr,end,v);
}
int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v,list<int>());
    while(e--){
        int a,b;
        cin>>a>>b;
        add_edge(a,b);
    }
    int x,y;
    cin>>x>>y;
    ans(x,y);
    for(auto c:store){
        for(auto d:c){
            cout<<d<<"->";
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int v;
vector<list<int>>graph;
vector<vector<int>>store;
unordered_set<int>visit;
void add_edge(int src,int dst){
    graph[src].push_back(dst);
    graph[dst].push_back(src);
}
void dfs(int curr,unordered_set<int>& visit){
    visit.insert(curr);
    for(auto c:graph[curr]){
        if(not visit.count(c)){
            dfs(c,visit);
            visit.insert(c);
        }
    }
}
int concomp(){
    unordered_set<int>visit;
    int cnt=0;
    for(int i=0;i<v;i++){
        
        if(visit.count(i)==0){
            cnt++;
            dfs(i,visit);
        }
    }
    return cnt;
}
// void ans(int curr,int end){
//     vector<int>v;
//     dfs(curr,end,v);
// }
int main(){
    int e;
    cin>>v>>e;
    graph.resize(v,list<int>());
    while(e--){
        int a,b;
        cin>>a>>b;
        add_edge(a,b);
    }
    cout<<concomp()<<endl;
}
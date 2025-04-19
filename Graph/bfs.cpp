#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
void add_edge(int src,int dst){
    graph[src].push_back(dst);
    graph[dst].push_back(src);
}
void bfs(int src,vector<int>& dist){
    queue<int>qu;
    unordered_set<int>visit;
    qu.push(src);
    visit.insert(src);
    while(!qu.empty()){
        auto c=qu.front();
        qu.pop();
        for(auto neighb:graph[c]){
            if(not visit.count(neighb)){
                dist[neighb]=dist[c]+1;
                qu.push(neighb);
                visit.insert(neighb);
            }
        }
    }
}
int main(){
    int v;
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v,list<int>());
    while(e--){
        int a,b;
        cin>>a>>b;
        add_edge(a,b);
    }
    // for(int i=0;i<graph.size();i++){
    //     cout<<i<<"->";
    //     for(auto c:graph[i]) cout<<c<<"->";
    //     cout<<endl;
    // }
    int x;
    cin>>x;
    vector<int>dist(v,0);
    bfs(x,dist);
    for(int i=0;i<v;i++){
        cout<<"distance from "<<x<<" to "<<i<<" is "<<dist[i]<<endl;
    }
}
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

vector<list<int> > graph;
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir) {
        graph[dest].push_back(src);
    }

}

void display() {
    for(int i = 0; i < graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto el : graph[i]) {
            cout<<el<<" , ";
        }
        cout<<"\n";
    }
}
void topo(){
    vector<int>indeg(v,0);
    for(auto c:graph){
        for(auto d:c){
            indeg[d]++;
        }
    }
    queue<int>qu;
    unordered_set<int>visit;
    for(int i=0;i<v;i++){
        if(indeg[i]==0){
            qu.push(i);
            visit.insert(i);
        }
    }
    while(!qu.empty()){
        auto curr=qu.front();
        qu.pop();
        cout<<curr<<" ";
        for(auto neighb:graph[curr]){
            if(not visit.count(neighb)){
                indeg[neighb]--;
                if(indeg[neighb]==0){
                    qu.push(neighb);
                    visit.insert(neighb);
                }
            }
        }
    }
}

int main() {

    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--) {
        int s, d;
        cin>>s>>d;
        add_edge(s, d, false);
    }
    topo();
}
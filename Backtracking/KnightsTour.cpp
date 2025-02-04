#include<bits/stdc++.h>
using namespace std;
vector<int>dx={-2,-1,-2,-1,2,1,2,1};
vector<int>dy={1,2,-1,-1,1,2,-1,-1};
bool isItSafe(vector<vector<int>> &grid,int i,int j,int n){
    return i>=0 and j>=0 and i<n and j<n and grid[i][j]==-1;
}
void display(vector<vector<int>>& grid,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void f(vector<vector<int>>& grid,int i,int j,int n,int count){
    if(count == (n*n)-1){
        grid[i][j]=count;
        display(grid,n);
        cout<<"*******\n\n";
        grid[i][j]=-1;
        return;
    }
    // from i,j we can go to 8 positions
    // for every position we can only go if it is safe
    for(int k=0;k<8;k++){
        if(isItSafe(grid,i+dx[k],j+dy[k],n)){
            grid[i+dx[k]][j+dy[k]]=count;
            f(grid,i+dx[k],j+dy[k],n,count+1);
            grid[i+dx[k]][j+dy[k]]=-1;
        }
    }
}
void KnightTour(int n,int i,int j){
    vector<vector<int>>grid(n,vector<int>(n,-1)); //-1 denotes position is vacant
    f(grid,i,j,n,0);
}
int main(){
    KnightTour(5,0,0);
}
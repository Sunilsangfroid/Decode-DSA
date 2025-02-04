#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ans=0;
bool canWego(int n,int i,int j,vector<vector<int>>& grid){
    return i>=0 && j>=0 && i<n && j<n && grid[i][j]==0;
}
void f(vector<vector<int>>& grid,int i,int j,int n){
    if(i==n-1 && j==n-1){
        ans+=1;
        return;  //base case
    }
    grid[i][j]=2; // 2 means visited
    if(canWego(n,i-1,j,grid)){
        f(grid,i-1,j,n);
    }
    if(canWego(n,i+1,j,grid)){
        f(grid,i+1,j,n);
    }
    if(canWego(n,i,j-1,grid)){
        f(grid,i,j-1,n);
    }
    if(canWego(n,i,j+1,grid)){
        f(grid,i,j+1,n);
    }
    grid[i][j]=0;
}
int ratInaMaize(vector<vector<int>>& grid,int n){
    ans=0;
    f(grid,0,0,n);
    return ans;
}
int main(){
    vector<vector<int>>grid={
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };
    cout<<ratInaMaize(grid,7);
    return 0;
}
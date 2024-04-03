#include<iostream>
#include<vector>
using namespace std;
int f(int r,int c,int i,int j){
    cout<<"HELLO";
    if(i==r and j==c) return 1;
    if(i>r or j>c or i<0 or j<0 ) return 0;
    cout<<"HELLO";
    return f(r,c,i+1,j)+f(r,c,i,j+1);
}
int main(){
    int r=2;
    int c=2;
    cout<<f(r,c,0,0);
}
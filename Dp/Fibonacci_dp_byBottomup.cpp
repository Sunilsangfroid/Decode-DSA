#include<iostream>
#include<vector>
using namespace std;
vector<int>dp;  // S.C.=O(n)
int f(int n){
    dp.clear();
    dp.resize(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int fibo(int n){  // S.C.=O(1)
    int a=0;
    int b=1;
    int c;
    if(n==0 or n==1) return n;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
}
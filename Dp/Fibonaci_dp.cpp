#include<iostream>
#include<vector>
using namespace std;
vector<int>dp; // Here we use global vector to reduce the number of parameters in function

int fibo(int n){
    if(n==0 or n==1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    dp.clear(); // To remove the grabage value if present some
    dp.resize(n+1,-1);
    cout<<fibo(n);
}
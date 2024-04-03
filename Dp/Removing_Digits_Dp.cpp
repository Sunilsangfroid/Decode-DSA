#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<int>getDigits(int num){
    vector<int>r;
    while(num>0){
        if(num%10 != 0){
            r.push_back(num%10);
        }
        num=num/10;
    }
    return r;
}
vector<int>dp;
int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int>remainder=getDigits(n);
    int result=INT_MAX;
    for(int i=0;i<remainder.size();i++){
        result=min(result,f(n-remainder[i]));
    }
    return dp[n]=1+result;
}
int fbu(int num){
    if(num==0) dp[0]=0;
    for(int i=1;i<=9;i++) dp[i]=1;
    for(int n=10;n<=num;n++){
        dp[n]=INT_MAX;
        vector<int>d=getDigits(n);
        for(int i=0;i<d.size();i++){
            dp[n]=min(dp[n],dp[(n-d[i])]);
        }
        dp[n]=1+dp[n];
    }
    return dp[num];
}
int main(){
    int n;
    cin>>n;
    dp.resize(1000005,-1);
    cout<<fbu(n);
}

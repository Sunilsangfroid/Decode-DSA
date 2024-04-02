#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void f(string &s){
    int left=0;
    int right=0;
    int up=0;
    int down=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='U') up++;
        if(s[i]=='D') down++;
        if(s[i]=='R') right++;
        if(s[i]=='L') left++;
    }
    int h=min(left,right);
    int v=min(up,down);
    if(h==0 and v>0){
        cout<<2<<endl;
        cout<<"UD"<<endl;
        return;
    }
    if(v==0 and h>0){
        cout<<2<<endl;
        cout<<"RL"<<endl;
        return;
    }
    string ans="";
    for(int i=0;i<v;i++){
        ans+="U";
    }
    for(int i=0;i<h;i++){
        ans+="R";
    }
    for(int i=0;i<v;i++){
        ans+="D";
    }
    for(int i=0;i<h;i++){
        ans+="L";
    }
    cout<<ans.length()<<endl;
    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        f(s); 
    }  
}
#include<iostream>
#include<stack>
#include<string>
using namespace std;
string ans="";
int main(){
    string s;
    cin>>s;
    stack<int>st;
    st.push(s[0]);
    for(int i=0;i<s.length();i++){
        if(s[i]!=st.top()){
            st.push(s[i]);
        }
        else{
            continue;
        }
    }
    if(st.size()==0){
        cout<<"sorry No strings present";
    }
    else{
        while(st.size()!=0){
            char p=st.top();
            st.pop();
            ans=p+ans;
        }
    }
    cout<<ans;
}
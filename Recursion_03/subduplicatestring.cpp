#include<iostream>
#include<vector>
#include<string>
using namespace std;
void storesubset(string ans, string org, vector<string> &v, bool flag){
    if(org==""){
        v.push_back(ans);
        return;
    }
    char ch=org[0];
    if(org.length()==1){
        if(flag==true) storesubset(ans+ch,org.substr(1),v,true);
        storesubset(ans,org.substr(1),v,true);
        return;
    }
    char dh=org[1];
    if(ch==dh){
        if(flag==true) storesubset(ans+ch,org.substr(1),v,true);
        storesubset(ans,org.substr(1),v,false);
    }
    else{
        if(flag==true) storesubset(ans+ch,org.substr(1),v,true);
        storesubset(ans,org.substr(1),v,true);
    }
}
int main(){
    string str="aaab";
    vector<string> v;
    storesubset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
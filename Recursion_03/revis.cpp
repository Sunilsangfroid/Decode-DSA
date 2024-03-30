#include<iostream>
#include<vector>
using namespace std;
void removedupli(string ans,string org,bool flag,vector<string>&a){
    if(org.length()==0){
        a.push_back(ans);
        return;
    }
    char ch=org[0];
    if(org.length()==1){
        if(flag==true) removedupli(ans+ch,org.substr(1),true,a);
        removedupli(ans,org.substr(1),true,a);
        return;
    }
    char dh=org[1];
    if(ch==dh){
        if(flag==true) removedupli(ans+ch,org.substr(1),true,a);
        removedupli(ans,org.substr(1),false,a);
    }
    else{
        if(flag==true) removedupli(ans+ch,org.substr(1),true,a);
        removedupli(ans,org.substr(1),true,a);
    }
}
int main(){
    string s="aabbcc";
    vector<string>a;
    removedupli("",s,true,a);
    for(string g: a){
        cout<<g<<endl;
    }
}
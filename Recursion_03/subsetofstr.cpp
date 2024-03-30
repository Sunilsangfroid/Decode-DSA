#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printsubstring(string ans,string org,vector<string>&v){
    if(org==""){
        //cout<<ans<<endl;
        v.push_back(ans);
        return;
    }
    char cha=org[0];
    printsubstring(ans,org.substr(1),v);
    printsubstring(ans+cha,org.substr(1),v);
}
int main(){
    string str="abc";
    vector<string>v;
    printsubstring("",str,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}
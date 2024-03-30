#include<iostream>
#include<vector>
using namespace std;
void permutation(string ans,string org){
    if(org.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<org.length();i++){
        char ch=org[i];
        string left=org.substr(0,i);
        string right=org.substr(i+1);
        permutation(ans+ch,left+right);
    }
}
int main(){
    string s="abc";
    permutation("",s);
}
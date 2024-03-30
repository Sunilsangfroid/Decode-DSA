#include<iostream>
#include<string>
using namespace std;

// void removeAchar(string ans, string org){
//     if(org.length()==0){
//         cout<<ans;
//         return;
//     }
//     char cha=org[0];
//     if(cha=='a') removeAchar(ans,org.substr(1));
//     else removeAchar(ans+cha,org.substr(1));

// }

void removeAchar(string ans, string org , int idx){
    if(idx==org.length()){
        cout<<ans;
        return;
    }
    char cha=org[idx];
    if(cha=='a') removeAchar(ans,org,idx+1);
    else removeAchar(ans+cha,org,idx+1);

}
int main(){
    string str="Chinary Sunil Patra";
    // string ans=" ";
    // for(int i=0;i<str.length();i++){
    //     if(str[i]!='a'){
    //         ans+=str[i];
    //     }
    // }
    // cout<<ans;


    // removeAchar(" ",str);
    removeAchar("",str,0);
}
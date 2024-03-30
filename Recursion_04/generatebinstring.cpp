#include<iostream>
#include<string>
using namespace std;
int n=4;
void generate(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n);
    if(s.length()==0 || s[s.length()-1]=='0'){
        generate(s+'1',n);
    }

}
int main(){
    generate("",3);
}
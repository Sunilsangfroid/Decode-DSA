#include<iostream>
using namespace std;
void permutations(string input,string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++){
        char ros=input[i];
        string left=input.substr(0,i);
        string right=input.substr(i+1);
        string ans=left+right;
        permutations(ans,output+ros);
    }
}
int main(){
    permutations("abcdefgh","");
}
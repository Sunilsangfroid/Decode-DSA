#include<iostream>
using namespace std;
void permutation(string input,string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++){
        string left=input.substr(0,i);
        string right=input.substr(i+1);
        string ros=left+right;
        permutation(ros,output+input[i]);
    }
}
int main(){
    permutation("abc","");
}
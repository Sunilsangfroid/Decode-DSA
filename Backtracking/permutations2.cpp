#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permutations2(string &str,int i){
    if(i==(str.length()-1)){
        cout<<str<<endl;
        return;
    }
    unordered_set<int>s;
    for(int idx=i;idx<str.length();idx++){
        if(s.count(str[idx])) continue;
        s.insert(str[idx]);
        swap(str[idx],str[i]);
        permutations2(str,i+1);
        swap(str[idx],str[i]);
    }
}
int main(){
    string a="aba";
    permutations2(a,0);
}
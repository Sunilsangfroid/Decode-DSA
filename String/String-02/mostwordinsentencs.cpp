#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="Sunil is a good boy";
    stringstream ss(str);
    string name;
    vector<string>v;
    while(ss>>name){
        v.push_back(name);
    }
    sort(v.begin(),v.end());
    int maxcount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count=1;
        }
        maxcount=max(maxcount,count);
    }
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
}
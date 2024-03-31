#include<iostream>
#include<string>
#include<climits>
#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    string str="Sunil is a good boy";
    stringstream ss(str);
    string name;
    while(ss>>name){
        cout<<name<<endl;
    }
}
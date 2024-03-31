#include<iostream>
#include<string>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    reverse(s.begin()+0,s.begin()+n/2);
    cout<<s;
}
    
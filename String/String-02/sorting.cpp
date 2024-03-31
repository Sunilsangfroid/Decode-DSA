#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter your words: ";
    getline(cin,s);
    sort(s.begin(),s.end()); // in ascending order of ASCII value
    cout<<s;
}
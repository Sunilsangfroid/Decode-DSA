#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the first string: ";
    getline(cin,s);
    string t;
    cout<<"Enter the second string: ";
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
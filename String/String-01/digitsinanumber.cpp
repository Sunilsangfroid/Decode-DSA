#include<iostream>
#include<string>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    string s=to_string(n);
    cout<<"Total number of digits in this number is: "<<s.length();
}
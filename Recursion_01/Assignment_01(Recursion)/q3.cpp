#include<iostream>
using namespace std;
bool checking2(int n){
    if(n==1) return true;
    if(n%2!=0) return false;
    else{
        checking2(n/2);
    }
}
int main(){
    int n;
    cin>>n;
    if(checking2(n)){
        cout<<"Yes, Given number is power of 2.";
    }
    else{
        cout<<"No,Given number is not power of 2.";
    }
}
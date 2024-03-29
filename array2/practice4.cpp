#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return;
}
void reverse_somepart(int i, int j, vector<int> &v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(7);
    v.push_back(89);
    v.push_back(45);
    v.push_back(12);
    v.push_back(70000);
    int k=2;
    int n=v.size();
    // reverse_somepart(1,4,v);
    if(k>n) k=k%n;
    reverse_somepart(0,n-k-1,v);
    reverse_somepart(n-k,n-1,v);
    reverse_somepart(0,n-1,v);
    display(v);
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the size of vector: ";
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0; i<v.size();i++){
    //     cin>>v[i];
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    vector<int> num;
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int q;
        cin>>q;
        num.push_back(q);
    }
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<" ";
    }

}
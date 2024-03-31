#include<iostream>
// #include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[]={1,3,-4,8,-1,6,9,0,-5,-2,-9};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    queue<int>q;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    int k=3;
    int p=0;
    while(p+k<=n){
        while(q.size()>0 && q.front()<p) q.pop();
        if(q.size()==0 || q.front()>=p+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        p++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
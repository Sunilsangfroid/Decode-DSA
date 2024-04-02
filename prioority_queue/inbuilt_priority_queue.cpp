#include<iostream>
#include<queue>
using namespace std;
int main(){
    vector<int>v{9,6,1,19,3,2,8,12,5};
    int arr[]={9,6,1,19,3,2,8,12,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // priority_queue<int>pq; //maxheap
    priority_queue<int,vector<int>,greater<int>>pq;
    priority_queue<int,vector<int>,greater<int>>minheap(v.begin(),v.end());
    priority_queue<int>maxheap(v.begin(),v.end());
    priority_queue<int,vector<int>,greater<int>>hpminheap(arr,arr+n);
    pq.push(10);
    pq.push(20);
    pq.push(9);
    pq.push(7);
    pq.push(-2);
    pq.push(90);
    pq.push(8);
    cout<<hpminheap.top();

}
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q){
    for(int i=0;i<q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reversefirstK(queue<int>& q,int k){
    stack<int>st;
    int n=q.size();
    for(int i=0;i<k;i++){
        int x=q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    int k=3;
    display(q);
    reversefirstK(q,k);
    display(q);

}
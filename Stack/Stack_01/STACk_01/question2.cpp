#include<iostream>
#include<stack>
using namespace std;
void RemovekthTop(stack<int>&st,int k){
    stack<int>temp;
    int count=0;
    for(int i=1;i<k;i++){
        int x=st.top();
        temp.push(x);
        st.pop();
    }
    st.pop();
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void display(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<st.top()<<" ";
    st.pop();
    display(st);
    st.push(x);
}
int main(){
    stack<int> st;
    int k=5;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    RemovekthTop(st,k);
    display(st);
    
}
#include<iostream>
#include<stack>
using namespace std;
void reverserec(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<st.top()<<" ";
    st.pop();
    reverserec(st);
    st.push(x);
}
void reverserec2(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    reverserec2(st);
    cout<<x<<" ";
    st.push(x);
}
void push_at_bottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    push_at_bottom(st,val);
    st.push(x);
}
void reverse(stack<int>&st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    push_at_bottom(st,x);
}
int main(){
    stack <int> st;
    st.push(90);
    st.push(67);
    st.push(9);
    st.push(6);
    st.push(190);
    st.push(670);
    reverserec2(st);
    cout<<endl;
    push_at_bottom(st,190);
    reverserec2(st);
    cout<<endl;
    reverse(st);
    cout<<st.top();
}
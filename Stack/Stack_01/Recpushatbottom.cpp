#include<iostream>
#include<stack>
using namespace std;
void reverserec2(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    reverserec2(st);
    cout<<x<<" ";
    st.push(x);
}
void pushbottom(stack<int>&st,int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushbottom(st,val);
    st.push(x);
}
int main(){
    stack <int> st;
    st.push(90);
    st.push(67);
    st.push(9);
    st.push(6);
    st.push(190);
    st.push(670);
    pushbottom(st,90000000);
    reverserec2(st);
}
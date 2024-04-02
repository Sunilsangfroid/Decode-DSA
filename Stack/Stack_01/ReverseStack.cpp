#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>st){
    stack <int>temp;
    while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){ 
        cout<<temp.top()<<" ";
        int y=temp.top();
        temp.pop();
        st.push(y);
    }
}
void pushatbotom(stack<int>&st,int val){
    stack <int> temp;
    while(st.size()>0){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(temp.size()>0){
        int y=temp.top();
        temp.pop();
        st.push(y);
    }
}
void pushatindex(stack<int>&st,int idx,int val){
    stack<int>temp;
    while(st.size()>idx){
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(temp.size()>0){
        int y=temp.top();
        temp.pop();
        st.push(y);
    }

}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    display(st);
    cout<<endl;
    pushatbotom(st,70);
    display(st);
    cout<<endl;
    pushatindex(st,1,290);
    display(st);
    
}
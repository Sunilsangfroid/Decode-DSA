#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(90);
    st.push(67);
    st.push(9);
    st.push(6);
    st.push(190);
    st.push(670);
    stack <int> temp;
    while(st.size()>00){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int y=temp.top();
        temp.pop();
        st.push(y);
    }
    cout<<endl;
    cout<<st.top();
}

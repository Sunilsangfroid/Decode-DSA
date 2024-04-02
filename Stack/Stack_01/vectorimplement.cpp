#include<iostream>
#include<vector>
using namespace std;
class Stack{
public:
    vector<int>arr;
    Stack(){}
    void push(int val){
        arr.push_back(val);
    }
    void pop(){
        if(arr.size()==0){
            cout<<"Stack is Empty";
            return;
        }
        arr.pop_back();
    }
    int top(){
        if(arr.size()==0){
            cout<<"Stack is underflow";
            return -1;
        }
        return arr[arr.size()-1];
    }
    int size(){
        return arr.size();
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(10);
    st.push(20);
    st.push(90);
    cout<<st.size();
}
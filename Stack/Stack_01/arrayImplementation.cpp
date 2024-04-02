#include<iostream>
using namespace std;
class Stack{
public:
    int arr[6];
    int idx=-1;

    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])-1){
            cout<<"Overflow is happened";
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx+1==0){
            cout<<"Underflow is happened here";
            return;
        }
        idx--;
    }
    int size(){
        return idx+1;
    }
    int top(){
        if(idx==-1){
            cout<<"Underflow is happened here";
            return -1;
        }
        return arr[idx];
    }
    void display(){
        for(int i=0;i<6;i++){
            cout<<arr[i]<<" ";
        }
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
    st.push(900);
    st.display();
    cout<<st.size();
}
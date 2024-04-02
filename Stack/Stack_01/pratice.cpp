#include<iostream>
#include<vector>
using namespace std;
class Stack{
public:
    vector<int>arr;
    Stack(){
    }
    void push(int val){
        arr.push_back(val);
    }
    void pop(){
        if(arr.size()==0){
            cout<<"Stack is underflow.";
            return;
        }
        arr.pop_back();
    }
    int top(){
        if(arr.size()==0){
            cout<<"Stack is underflow.";
            return -1;
        }
        return arr[arr.size()-1];
    }
    int size(){
        return arr.size();
    }
    
};
// class Stack{
// public:
//     int arr[5];
//     int idx=-1;
//     Stack(){
//         idx=-1;
//     }
//     void push(int val){
//         idx++;
//         arr[idx]=val;
//     }
//     void pop(){
//         if(sizeof(arr)/sizeof(arr[0])==-1){
//             cout<<"Stack is underflow.";
//             return;
//         }
//         idx--;
//     }
//     int top(){
//         if(sizeof(arr)/sizeof(arr[0])==-1){
//             cout<<"Stack is underflow.";
//             return -1;
//         }
//         return arr[idx];
//     }
//     int size(){
//         return idx+1;
//     }
    
// };
int main(){
    Stack st;
    cout<<st.size();
    st.push(10);
    st.push(20);
    st.push(50);
    cout<<st.size();
    cout<<st.top();
    st.pop();
    cout<<st.size();
    cout<<st.top();
}
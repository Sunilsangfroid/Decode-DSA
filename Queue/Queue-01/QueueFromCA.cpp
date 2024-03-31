#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int s;
    vector<int>arr;
    Queue(int val){
        f=0;
        b=0;
        s=0;
        vector<int>v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is overflow";
            return;
        }
        arr[b]=val;
        b++;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is underflow";
            return;
        }
        f++;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is underflow";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"Queue is underflow";
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return s;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    bool empty(){
        if(s==0) return true;
        else false;
    }
};

int main(){
    Queue q(5);
    cout<<q.empty()<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.empty();
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<" "<<q.back()<<endl;
    q.push(50);
    q.push(60);
    // display(q);
    // operation(q);
    q.display();
   
}

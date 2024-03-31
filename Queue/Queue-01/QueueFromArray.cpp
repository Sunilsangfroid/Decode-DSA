#include<iostream>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int arr[5];
    Queue(){
        f=0;
        b=0;
    }
    void push(int val){
        if(b==5){
            cout<<"Queue is overflow";
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(b==0){
            cout<<"Queue is underflow";
            return;
        }
        f++;
    }
    int front(){
        if(b==0){
            cout<<"Queue is underflow";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(b==0){
            cout<<"Queue is underflow";
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    bool empty(){
        if(b-f==0) return true;
        else false;
    }
};

int main(){
    Queue q;
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

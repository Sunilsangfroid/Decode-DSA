#include<iostream>
using namespace std;
class Node{  // User defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue{ // User defined data structure
public:
    Node* head;
    Node* tail;
    int size=0;
    Queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;

    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void pop(){
        if(size==0){
            cout<<"Queue is empty";
            return;
        }
        Node* temp=head;
        head=head->next;
        size--;
        delete(temp);
    }
    int front(){
        if(size==0){
            cout<<"Queue is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->val;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    }
};

int main(){
    Queue q;//{ }
    q.push(10); //{10->NULL}
    q.push(20); //{10->20->NULL}
    q.push(30);//{10->20->30->NULL}
    q.push(40);//{10->20->30->40->NULL}
    q.push(50);//{10->20->30->40->50->NULL}
    q.display();
    cout<<q.size;
}

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
class LinkedList{ // User defined data structure
public:
    Node* head;
    Node* tail;
    int size=0;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
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
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;

    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        else if(idx==0){
            insertAtHead(val);
        }
        else if(idx==size) {
            insertAtEnd(val);
        }
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
            
        }
    }
    // int getElement(int idx){
    //     if(idx<0 || idx>=size){
    //         cout<<"Invalid index";
    //         return -1;
    //     }
    //     else if(idx==0) return head.val;
    //     else if(idx==size-1) return tail.val;
    //     else{}
    // }
};

int main(){
    LinkedList ll;//{ }
    ll.display();
    ll.insertAtEnd(10); //{10->NULL}
    ll.display();
    ll.insertAtEnd(20); //{10->20->NULL}
    ll.display();
    ll.insertAtHead(78);
    ll.display();
    ll.insertAtIdx(2,1900);
    ll.display();

}
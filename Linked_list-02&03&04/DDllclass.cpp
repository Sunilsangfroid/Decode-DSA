#include<iostream>
using namespace std;
class Node{   //USER DEFINED DATA TYPE
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class DLL{ // USER DEFINED DATA STRUCTURE
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
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
    void insertAtIdx(int val,int idx){
        if(idx<0 || idx>size) cout<<"INVALID INSERTION";
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }  
            t->next=temp->next;
            t->prev=temp;
            temp->next=t;   
            t->next->prev=t;
            size++;        
        }
    }
    int getatindex(int idx){
        if(idx< 0 || idx>=size){
            cout<<"Invalid case";
            return 1000;
        } 
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){
                Node* temp=head;
                for(int i=1;i<=idx;i++){
                    temp=temp->next;
                }
                return temp->val;
            }
            else{
                Node* temp=tail;
                for(int i=1;i<size-idx;i++){
                    temp=temp->prev;
                }
                return temp->val;
            }

        }        
    }
    void deleteAtHead(){
        if(size==0) {
            cout<<"List is empty";
            return;
        }
        else{
            head=head->next;
            if(head!=NULL) head->prev=NULL;
            if(head==NULL) tail=NULL;
            size--;
        }
    }
    void deleteAtTail(){
        if(size == 0){
            cout << "List is empty";
            return;
        } 
        else if(size==1){
            deleteAtHead();
            return;
        }
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtidx(int idx){
        if(idx < 0 || idx >=size){
            cout<<"INVALID";
            return;
        }
        if(idx==0){
            return deleteAtHead();
        }
        if(idx==size-1){
            return deleteAtTail();
        }
        else{
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }
};
int main(){
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(80);
    list.insertAtHead(60);
    list.deleteAtHead();
    list.deleteAtidx(1);
    cout<<list.getatindex(1);
    // list.display();
}
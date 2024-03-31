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

class Dequeue{ // USER DEFINED DATA STRUCTURE
public:
    Node* head;
    Node* tail;
    int size;
    Dequeue(){
        head=tail=NULL;
        size=0;
    }
    void pushback(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void pushfront(int val){
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
    void popfront(){
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
    void poptail(){
        if(size == 0){
            cout << "List is empty";
            return;
        } 
        else if(size==1){
            popfront();
            return;
        }
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
    }
    int getfront(){
        if(size==0){
            cout<<"Dequeue is empty";
            return -1;
        }
        return head->val;
    }
    int getback(){
        if(size==0){
            cout<<"Dequeue is empty";
            return -1;
        }
        return tail->val;
    }
};
int main(){
    Dequeue D;
    D.pushback(10);
    D.pushback(20);
    D.pushback(30);
    D.pushfront(40);
    D.pushback(50);
    D.pushback(60);
    D.pushback(70);
    D.pushfront(80);
    D.poptail();
    D.display();
    cout<<D.getback();
}
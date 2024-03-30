#include<iostream>
using namespace std;
class Node{   //USER DEFINED DATA TYPE
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class Linkedlist{ // USER DEFINED DATA STRUCTURE
public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertattail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertathead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
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
    void insertatidx(int val,int idx){
        if(idx<0 || idx>size) cout<<"INVALID INSERTION";
        else if(idx==0) insertathead(val);
        else if(idx==size) insertattail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }  
            t->next=temp->next;
            temp->next=t;   
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
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;

        }        
    }
    void deletethead(){
        if(size==0) {
            cout<<"List is empty";
            return;
        }
        else{
            head=head->next;
            size--;
        }
    }
    void deleteattail(){
        if(size == 0){
            cout << "List is empty";
        return;
        } 
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
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
            return deletethead();
        }
        if(idx==size-1){
            return deleteattail();
        }
        else{
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }


    }
        
    
};



int main(){
    Linkedlist ll;
    ll.insertattail(10);
    ll.display();
    ll.insertattail(20);
    ll.display();
    ll.insertattail(30);
    ll.insertattail(40);
    ll.display();
    ll.insertathead(70);
    ll.display();
    ll.insertatidx(60,2);
    ll.display();
    cout<<ll.size<<endl;;
    cout<<ll.getatindex(2);
    cout<<endl;
    ll.deleteAtidx(3);
    ll.display();
}
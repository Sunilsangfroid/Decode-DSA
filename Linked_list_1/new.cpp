#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
Node e;
void display(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    display(head->next);
}
void reverse(Node* head){
    if(head==NULL) return;
    Node* temp=new Node(head->val);
    reverse(head->next);
    e->next=temp;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    reverse(a);
    display(a)

}

#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};
void Display(Node* head){
    if(head==NULL) return; //base case
    cout<<head->value<<" ";//kaam
    Display(head->next);   //call
}
// void revDisplay(Node* head){
//     if(head==NULL) return; //base case
//     revDisplay(head->next); // call
//     cout<<head->value<<" "; //kaam
// }
void insertAtTail(Node* head,int val){
    Node* t=new Node(val);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=t;
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

    Display(a);
    insertAtTail(a,90);
    cout<<endl;
    Display(a);
    cout<<endl;
    // revDisplay(a);
}

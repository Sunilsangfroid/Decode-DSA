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
int main(){
    // 10, 20,30,40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // cout<<&a<<endl;
    // cout<<&b<<endl;
    // cout<<&c<<endl;
    // cout<<&d<<endl; 
    // cout<<a.next<<endl;  
    // cout<<b.next<<endl;  
    // cout<<c.next<<endl;  
    // cout<<d.next<<endl;   
    //Forming linked list
    a.next=&b;
    b.next=&c;
    c.next=&d;

    // d.next=NULL;
    //cout<<b.val;

    cout<<(*(a.next)).val<<endl;;
    Node*ptr=&b;
    cout<<(*ptr).val<<endl;
    ptr->val=200;
    (*ptr).val=100;
    cout<<b.val;
    cout<<endl;

    a.next->val=900;
    cout<<b.val;
    cout<<endl;

    //give the value of b without using b
    cout<<a.next->val;
    cout<<endl;
    cout<<c.next->val<<endl;
    cout<<((a.next)->next)->val<<endl;
    cout<<(*((*((*(a.next)).next)).next)).val<<endl;
    cout<<(((a.next)->next)->next)->val;



}
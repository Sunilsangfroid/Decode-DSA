#include<iostream>
using namespace std;
class A{
    protected: // can't be accessed but can be inherited
    int a_ka_protected;
    public:
    int a_ka_public; // can be both accessed and inherited
    A(){
        cout<<"Constructor A ka call Hua!\n";
    }
};
class B:virtual public A{
public:
    int b_ka_public;
    B(){
        cout<<"Constructor B ka call Hua!\n";
    }
};
class C: virtual public A{
public:
    int c_ka_public;
    C(){
        cout<<"Constructor c ka call hua!\n";
    }
};
class D: public B, public C{
public:
    int d_ka_public;

    void show(){
        cout<<a_ka_public;
    }

};
int main(){
    D d;
    d.a_ka_public=10;
    d.show();

    
    
}
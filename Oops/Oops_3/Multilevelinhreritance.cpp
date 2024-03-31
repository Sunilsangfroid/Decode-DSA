#include<iostream>
using namespace std;
class A{
    private: //can't be accessed and inherited
    int a_ka_privated;
    protected: // can't be accessed but can be inherited
    int a_ka_protected;
    public:
    int a_ka_public; // can be both accessed and inherited
};
class B : protected A{ //a_ka_private, a_ka_public
public:
    int b_ka_public;
    void show(){
        a_ka_protected=20;
        a_ka_public=30;
    }
};
class C : public B{ // b_ka_public,a_ka_protecyed,a_ka_public
public:
    int c_ka_public;
    void fun(){
        a_ka_public=30;
        a_ka_protected=40;
    }
};
int main(){
    A a;
    a.a_ka_public=10;
    B b;
    C c;
    c.b_ka_public=30;
    
    
}
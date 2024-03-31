#include<iostream>
using namespace std;
class A{
    private: //can't be accessed and inherited
    int a_ka_privated;
    protected: // can't be accessed but can be inherited
    int a_ka_protected;
    public:
    int a_ka_public; // can be both accessed and inherited
    A(){
        cout<<"Constructor A ka call Hua!\n";
    }
};
class B : protected A{ //a_ka_private, a_ka_public
public:
    int b_ka_public;
    B(){
        cout<<"Constructor B ka call Hua!\n";
    }
};
class C : public B{ // b_ka_public,a_ka_protecyed,a_ka_public
public:
    int c_ka_public;
    C(){
        cout<<"Constructor c ka call hua!\n";
    }
};
int main(){
    C c;
    
    
}
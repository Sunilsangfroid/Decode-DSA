#include<iostream>
using namespace std;
class vehicle{
    public:
    int a_ka_public; // can be both accessed and inherited
    int chap;
    void show(){
        cout<<"vehicle ka call Hua!\n";
    }
};
class Bike : public vehicle{ //a_ka_private, a_ka_public
public:
    int handlesize;
    void show(){
        cout<<"Bike ka call Hua!\n";
    }
};
class C : public Bike{
public:
double flajg;
    void show(){
        cout<<"c ka call hua";
    }
};
int main(){

    // complie POV-> vehicle ka call
    // Runtime POV-> Bike ka address hai
    C c;
    Bike *b;
    b=&c;
    b->show(); 

    vehicle v;
    Bike bo;
    C clo;

    cout<<sizeof(v)<<" "<<sizeof(bo)<<" "<<sizeof(clo);
}
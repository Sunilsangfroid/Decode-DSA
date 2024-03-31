#include<iostream>
using namespace std;
class calculator{
    private:
    int a;
    int b;
    public:
    void sum(){
        cout<<a+b<<endl;
    }
    void sub(){
        cout<<a-b<<endl;
    }
}
;int main(){
     calculator calu;
     //calu.a=15;
     //calu.b=12;
     calu.sum();
     calu.sub();

}
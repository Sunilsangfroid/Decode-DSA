#include<iostream>
#include<string>
using namespace std;

class Complexnumber{
    public:
    int realnumber;
    int imaginarynumber;

    // Complexnumber add(Complexnumber &c1){
    //     Complexnumber c3;
    //     c3.imaginarynumber=c1.imaginarynumber+this->imaginarynumber;
    //     c3.realnumber=c1.realnumber+this->realnumber;
    //     return c3;
    // }

    Complexnumber operator + (Complexnumber &c1){
        Complexnumber c3;
        c3.imaginarynumber=c1.imaginarynumber+this->imaginarynumber;
        c3.realnumber=c1.realnumber+this->realnumber;
        return c3;
    }
};

int main(){
    Complexnumber a1, a2;
    a1.realnumber=3;
    a1.imaginarynumber=5;

    a2.realnumber=8;
    a2.imaginarynumber=10;

    // Complexnumber a3=a1.add(a2);
    Complexnumber a3=a1 + a2;
    Complexnumber a4=a3 + a2 + a1;


    // Complexnumber a3;
    // a3.realnumber=a1.realnumber+a2.realnumber;
    // a3.imaginarynumber=a1.imaginarynumber+a2.imaginarynumber;

    cout<<"Real part of sum is: "<<a3.realnumber<<" "<<"Imaginary part of sum is: "<<a3.imaginarynumber;
    cout<<"Real part of sum is: "<<a4.realnumber<<" "<<"Imaginary part of sum is: "<<a4.imaginarynumber;
}

#include<iostream>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;

    //default constructor
    Bike( int ts, int es) : tyresize(ts), enginesize(es){}
    Bike(int ts): tyresize(ts), enginesize(90){}
    Bike(): tyresize(12),enginesize(200){}
};
int main(){
    Bike TVS(20,200); // Object is created and constructor ko call jayegi
    Bike Splender(50);
    Bike bmw;

    cout<<TVS.tyresize<<" "<<TVS.enginesize<<endl;
    cout<<Splender.tyresize<<" "<<Splender.enginesize<<endl;
    cout<<bmw.tyresize<<" "<<bmw.enginesize<<endl;
}
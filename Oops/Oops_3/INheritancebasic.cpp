#include<iostream>
using namespace std;
class Vehicle{ //base class, parent class
    public:
    int tyresize;
    int enginesize;
    int lights;
    string companyname2;

    void show(){
        cout<<companyname2;
    }

    Vehicle(){
        cout<<"Vehicle constructor ka call hua! \n";
    }
};
class Car : public Vehicle{ // car inherits vehicle
    public:
    int steeringsize;

    Car(){
        cout<<"Car constructor ka call hua! \n";
    }
};
class Bike : public Vehicle{ // Derived class, child class
    public:
    int handlesize;

    Bike(){
        cout<<"Bike constructor ka call hua!";
    }
};
int main(){
    Bike Tvs; // Object is created and constructor ko call jayegi
    Tvs.handlesize=20;
    Tvs.enginesize=30;
    Tvs.lights=3;
    Tvs.companyname2="FFGVGVM";
    Bike Splender;
    Splender.handlesize=30;
    cout<<Tvs.handlesize<<" "<<Tvs.lights<<endl;
    Tvs.show();
}
#include<iostream>
using namespace std;
class Bike{
    public:
    int tyresize;

    //default constructor
    Bike(){
        cout<<"Constructor ka call hua.";
    }
};
int main(){
    Bike TVS; // Object is created and constructor ko call jayegi
    Bike Splender;
}
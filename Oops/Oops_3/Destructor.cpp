#include<iostream>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;

    Bike(int tyresize, int enginesize){
        this->tyresize=tyresize;
        this->enginesize=enginesize;
    }

    //Destructor
    ~Bike(){
        cout<<"Destructor call hua!\n";
    }
};
int main(){
    Bike tvs(12,13);
    Bike splender(20, 30);
    Bike honda(11,30);

    bool flag=true;
    if(flag==true){
        Bike bmw(20,45);
        cout<<bmw.tyresize<<" "<<bmw.enginesize<<" "<<endl;
    }

    cout<<tvs.tyresize<<" "<<tvs.enginesize<<" "<<endl;
    cout<<splender.tyresize<<" "<<splender.enginesize<<" "<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<" "<<endl;
    
}

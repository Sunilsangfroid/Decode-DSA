#include<iostream>
using namespace std;
class Bike{
    public:
    static int noofbikes;
    int tyresize;
    int enginesize;

    Bike(int tyresize, int enginesize){
        this->tyresize=tyresize;
        this->enginesize=enginesize;
    }
};
int Bike:: noofbikes=20;
int main(){
    Bike tvs(12,13);
    Bike splender(20, 30);
    Bike honda(11,30);

    cout<<tvs.tyresize<<" "<<tvs.enginesize<<" "<<endl;
    cout<<tvs.noofbikes<<endl;
    cout<<splender.tyresize<<" "<<splender.enginesize<<" "<<endl;
    cout<<splender.noofbikes<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<" "<<endl;
    cout<<honda.noofbikes<<endl;
    
}

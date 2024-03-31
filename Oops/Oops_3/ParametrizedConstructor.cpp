#include<iostream>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;

    Bike(int tyresize, int enginesize){
        this->tyresize=tyresize;
        this->enginesize=enginesize;
        cout<<"Constructor call hua \n";
    }
};
int main(){
    Bike tvs(12,13);
    Bike splender(20, 30);
    Bike honda(11,30);

    cout<<tvs.tyresize<<" "<<tvs.enginesize<<" "<<endl;
    cout<<splender.tyresize<<" "<<splender.enginesize<<" "<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<" "<<endl;
    
}

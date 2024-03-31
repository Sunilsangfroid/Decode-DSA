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

    static void incnofbikes(){
        noofbikes ++; // only static variable can access by staic function 
    }
};
int Bike :: noofbikes=10;
int b=20;
int main(){
    int b=23;
    cout<<b<<" "<<::b<<endl;
    Bike tvs(12,13);
    Bike splender(20, 30);
    Bike honda(11,30);

    tvs.incnofbikes();
    cout<<tvs.noofbikes<<endl;
    cout<<splender.noofbikes<<endl;

    splender.incnofbikes();
    cout<<tvs.noofbikes<<endl;
    cout<<splender.noofbikes<<endl;

    Bike::incnofbikes();
    cout<<tvs.noofbikes<<endl;
    cout<<splender.noofbikes<<endl;


    cout<<tvs.tyresize<<" "<<tvs.enginesize<<" "<<endl;
    cout<<splender.tyresize<<" "<<splender.enginesize<<" "<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<" "<<endl;
    
}

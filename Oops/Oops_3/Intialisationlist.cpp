#include<iostream>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;

    Bike(int t, int e) : tyresize(t),enginesize(e){
        cout<<"Constructor ka call hua.";
    }
};
int main(){
    Bike tvs(12, 20);
    Bike splender(21,200);
    cout<<tvs.tyresize<<" "<<tvs.enginesize<<" "<<endl;
    cout<<splender.tyresize<<" "<<splender.enginesize<<" "<<endl;
}
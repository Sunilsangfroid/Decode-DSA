#include<iostream>
class Person{
    public:
    int health;
    private:
    int score;
};
using namespace std;
int main(){
    Person sunil;
    sunil.health=100;
    //sunil.score=40;
    cout<<sunil.health<<endl;
    //cout<<sunil.score<<endl;
}

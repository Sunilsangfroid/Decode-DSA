#include<iostream>
using namespace std;
class Student{
public:
    int roll_num;
    string name;
    float pct;

    Student(string name,int roll_num,float pct){
        this->name=name;
        this->roll_num=roll_num;
        this->pct=pct;

    }
};
int main(){
    Student *ptr=new Student("CH SUNIL PATRA",294,93.62);
    cout<<ptr->name;
}


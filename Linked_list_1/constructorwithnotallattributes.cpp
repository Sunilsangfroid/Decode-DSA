#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    float pct;

    Student(int rno,string name){
        this->rno=rno;
        this->name=name;
    }
};
int main(){
    Student* s=new Student(294,"SUNIL PATRA");
    s->pct=93.09;
    cout<<s->pct;
}

#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    float pct;

    //constructor
    // Student(string n,int r,int p){
    //     name=n;
    //     rno=r;
    //     pct=p;


    // }
    Student(string name,int rno,int pct){
        this->name=name;
        (*this).rno=rno;
        this->pct=pct;


    }
};
void change(Student &s1){  //pass by reference
    s1.name="PIKACHU";

}
int main(){
    Student s1("SUNIL PATRA",294,90.0);
    cout<<s1.name<<" ";
    s1.name="PRITAM";
    change(s1);
    cout<<s1.name;
    Student* ptr=&s1;
    // (*ptr).name="GOPAL";
    ptr->name="SUBHAM";
    cout<<s1.name;
    
//     Student s;
//     s.rno=294;
//     s.name="SUNIL PATRA";
//     s.pct=90.0;
//     cout<<s.pct;
 }
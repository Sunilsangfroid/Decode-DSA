#include<iostream>
using namespace std;
class Student{
public:
    string name;
    float mark;
    int rno;
    //define constructor
    // Student(string n,float m,int r){
    //     name=n;
    //     mark=m;
    //     rno=r;
    // };
    Student(string name,float mark,int rno){
        this->name=name;
        this->mark=mark;
        this->rno=rno;
    };
    
};
void change(Student &s){  //pas by reference it can't be pass by values to function
    s.name="pritam";
}

int main(){
    Student s("sunil",76.8,294);
    //Students s;
    // s.name="sunil";
    // s.rno=294;
    // s.mark=76.8;
    cout<<s.rno<<endl;;
    change(s);
    cout<<s.name;
}

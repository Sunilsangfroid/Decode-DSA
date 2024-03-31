#include<iostream>
using namespace std;
class cricketer{
private:
    string name;
    int age;
    int nomp;
    float avg;
public:
    void setname(string name){
        this->name=name;
    }
    void setage(int age){
        this->age=age;
    }
    void setnomp(int nomp){
        this->nomp=nomp;
    }
    void setavg(float avg){
        this->avg=avg;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    int getnomp(){
        return nomp;
    }
    float getavg(){
        return avg;
    }
};
int main(){
    cricketer Msd;
    cricketer Chiku;
    
    Msd.setname("Mahendra Singh Dhoni");
    Msd.setage(41);
    Msd.setnomp(250);
    Msd.setavg(43.67);
    
    Chiku.setname("Virat Kohli");
    Chiku.setage(37);
    Chiku.setnomp(300);
    Chiku.setavg(60.81);

    cricketer crics[2]={Msd, Chiku};

    for(int i=0;i<2;i++){
        cout<<crics[i].getname()<<endl;
        cout<<crics[i].getage()<<endl;
        cout<<crics[i].getnomp()<<endl;
        cout<<crics[i].getavg()<<endl;
        cout<<endl;
    }
}
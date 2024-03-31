#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    int nop;
    int countbooks(int p){
        if(price<p){
            return 1;
        }
        else{
            return 0;
        }
    }
    bool isbookpresent(string name_book){
        if(name==name_book){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    book pavilion;
    pavilion.name="sunil";
    pavilion.price=100;
    pavilion.nop=243;
    cout<<pavilion.countbooks(2000)<<endl;
    cout<<pavilion.isbookpresent("anil");
}
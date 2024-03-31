#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int age;
    int health;
    bool alive;
    public:
    void setscore(int score){
        this->score=score;
    }
    void setage(int age){
        this->age=age;
    }
    void sethealth(int health){
        this->health=health;
    }
    void setalive(bool alive){
        this->alive=alive;
    }
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    int getagee(){
        return age;
    }
    int isalive(){
        return alive;
    }

};
int addscore(player a, player b){
    return a.getscore()+b.getscore();
}
player maxscore(player a, player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
}
int main(){
    player harsh;
    player sunil;
    harsh.setscore(100);
    harsh.setage(21);
    harsh.setalive(true);
    harsh.sethealth(100);
    sunil.setscore(500);
    sunil.setage(20);
    sunil.setalive(true);
    sunil.sethealth(150);
    cout<<addscore(harsh,sunil)<<endl;
    player sanket=maxscore(harsh,sunil);
    cout<<sanket.gethealth()<<endl;
    cout<<sanket.getagee()<<endl;

}
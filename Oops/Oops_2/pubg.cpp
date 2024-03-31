#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
private:
    class Helmet{
    private:
        int hp;
        int level;
    public:
        void sethp(int hp){
            this->hp=hp;
        }
        void setlevel(int level){
            this->level=level;
        }
        int gethp(){
            return hp;
        }
        int getlevel(){
            return level;
        }
    };

    int age;
    int score;
    int health;
    bool alive;
    Gun gun;
    Helmet helmet;
public:
    void setage(int age){
        this->age=age;
    }
    void sethealth(int health){
        this->health=health;
    }
    void setscore(int score){
        this->score=score;
    }
    void setalive(bool alive){
        this->alive=alive;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    bool getalive(){
        return alive;
    }
    Gun getgun(){
        return gun;
    }
    void setgun(Gun gun){
        this->gun=gun;
    }
    Helmet gethelmet(){
        cout<<helmet.gethp()<<endl;
        cout<<helmet.getlevel()<<endl;
    }
    void sethelmet(int level){
        Helmet *helmet=new Helmet;
        helmet->setlevel(level);
        int health=0;
        if(level==1){
            health=25;
        }
        else if(level==2){
            health=50;
        }
        else if(level==3){
            health=100;
        }
        else{
            cout<<"error,Invalid level";
        }
        helmet->sethp(health);
        this->helmet=*helmet;
    }
};
int main(){
    Player harsh;
    Player sunil;
    Gun akm;
    Gun awm;

    Player *urvi=new Player;
    

    akm.ammo=100;
    akm.damage=50;
    akm.scope=3;

    awm.ammo=20;
    awm.damage=300;
    awm.scope=8;


    harsh.setage(21);
    harsh.setscore(100);
    harsh.sethealth(50);
    harsh.setgun(akm);
    harsh.setalive(true);
    harsh.sethelmet(2);

    sunil.setage(19);
    sunil.setgun(awm);
    sunil.setscore(500);
    sunil.sethealth(900);
    sunil.setalive(true);
    sunil.sethelmet(3);

    Gun gun143=sunil.getgun();
    cout<<gun143.scope<<endl;
    cout<<gun143.ammo<<endl;
    cout<<gun143.damage<<endl;

    harsh.gethelmet();
    cout<<" "<<endl;

    Player players[3]={harsh,sunil,*urvi};
    cout<<players[1].getage();

}
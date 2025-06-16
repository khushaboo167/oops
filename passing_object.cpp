// passing class object to function
#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int age;
    int score;
    bool alive;

    public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return health;
    }
    int getScore(){
        return health;
    }
    int isAlive(){
        return health;
    }

    // setter
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool alive){
        this->alive =  alive;
    }
};
int addScore(player a,player b){
    return a.getScore()+b.getScore();
}
player getMaxScorePlayer(player a, player b){
    if(a.getScore()>b.getScore())
    return a;
else return b;
}

int main(){
    player harsh;
    player raghav;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    raghav.setAge(25);
    raghav.setScore(1900);
    raghav.setIsAlive(true);
    raghav.setHealth(700);

   cout<<addScore(harsh,raghav)<<endl;

   player mx=getMaxScorePlayer(harsh,raghav);
   cout<<mx.getScore()<<endl;
   cout<<mx.getHealth();
}
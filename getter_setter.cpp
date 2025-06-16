#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;

    public:
    // setter
    void setScore(int s){
        cout<<"score set kiya ja rha hai";
        score = s;
    }
    void setHealth(int h){
        cout<<"health change kiya ja rha hai"<<endl;
        health = h;
    }
    // getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
       player harsh;
       harsh.setScore(10);
       harsh.setHealth(50);
       cout<<harsh.getScore()<<endl;
       cout<<harsh.getHealth();
}
// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// class player{
//     public:
//     int score;
//     int health;
// };
// int main(){

//     player amit;
//     amit.score=50;
//     amit.health=90;
//     cout<<amit.score<<endl;
//     cout<<amit.health<<endl;

//     player harsh;
//     harsh.score=500;
//     harsh.health=390;
//     cout<<harsh.score<<endl;
//     cout<<harsh.health<<endl;
// }






#include<iostream>
#include<stdlib.h>
using namespace std;
class player{
    public:
    int score;
    int health;
    void showHealth(){
        cout<<"health is: "<<health<<endl;
    }
    void showScore(){
        cout<<"score is: "<<score<<endl;
    }
};
class calculator{
    public:
    int a;
    int b;
    void add(){
        cout<<a+b<<endl;
    }
    void sub(){
        cout<<a-b;
    }
};
int main(){

    player amit;
    amit.score=50;
    amit.health=90;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;

    player harsh;
    harsh.score=500;
    harsh.health=390;
    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;
    

    amit.showHealth();
    amit.showScore();

    calculator calci;
    calci.a=10;
    calci.b=7;
    calci.add();
    calci.sub();
}
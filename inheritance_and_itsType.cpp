// private : can not access outside, can not inherited
// protected : can not access outside, can inherited
// public : can access outside, can inherited

#include<iostream>
using namespace std;
class vehicle{
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    vehicle(){
        cout<<"vehicle kka constructor call ho rha h"<<endl;
    }
};
class car:public vehicle{  //car inheriits vehicle
    public:
    int steeringSize;
};
class bike:public vehicle{  //derived class, child class
    public:
    int handleSize;
    bike(){
        cout<<"bike kka constructor call ho rha h"<<endl;
    }
};
int main(){
    bike honda;
    honda.handleSize=8;
    honda.tyreSize=10;
    honda.engineSize=500;
    cout<<honda.tyreSize<<endl;
}
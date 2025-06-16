#include<iostream>
using namespace std;
class A{
    public:
     void fun(){
        cout<<"khushaboo"<<endl;
    }
};
class B : public A{
    public:
    void fun(){
        cout<<"laxmi"<<endl;
    }
};
int main(){
     B obj;
    obj.fun();
     obj.A::fun();   // scope resolution for A
     obj.fun();
     return 0;

}
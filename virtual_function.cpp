#include<iostream>
using namespace std;
class vehicle{
    public:
    int tyreSize;
    int engineSize;

   virtual void show(){
        cout<<"vehicle ka show"<<endl;
    }
};
class bike : public vehicle{
    public:
    int handleSize;
    void show(){
        cout<<"bike ka show"<<endl;
    }
};
int main(){
    vehicle a;
    bike b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
}
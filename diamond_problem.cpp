#include<iostream>
using namespace std;
class A{
    private:
    int a_ka_private;
    protected:
    int a_ka_protected;
    public:
    int a_ka_public;
    A(){
        cout<<"a ka constructor call hua"<<endl;
    }
};

class B :virtual public A{
    public:
    int b_ka_public;
    B(){
        cout<<"a ka constructor call hua"<<endl;
    }
};

class C :virtual public A{
    public:
    int c_ka_public;
    C(){
        cout<<"C ka constructor call hua"<<endl;
    }
};

class D : public B, public C{
    public:
    int d_ka_public;
    void show(){
        cout<<a_ka_public<<endl;
    }
};
int main(){
    D d;
    d.a_ka_public=10;
    d.show();
}

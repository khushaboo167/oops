// function overloading
// #include<iostream>
// using namespace std;
// void add(int a,int b){
//     cout<<a+b<<endl;

// }
// void add(int a){
//     cout<<10+5;
// }
// int main(){
//     add(2,5);
//     add(5);
// }





// constructor overloading
#include<iostream>
using namespace std;
class bike{
    public:
    int tyreSize;
    int engineSize;
    bike(int ts,int es): tyreSize(ts),engineSize(es){}
    bike(int ts): tyreSize(ts),engineSize(100){}
    bike(): tyreSize(12),engineSize(100){}
}

int main(){
    
}
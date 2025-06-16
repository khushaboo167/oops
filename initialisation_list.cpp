// destructor
#include<iostream>
using namespace std;
class bike{
    public:
    int tyreSize;
    int engineSize;
    
    bike(int ts,int es=89) : tyreSize(ts), engineSize(es){}
};
int main(){
    bike tvs(11,78);
    bike honda(17,90);
    
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
}
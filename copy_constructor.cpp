// shallow copy: this copy is not independent...phle ki copy dusre me effect  krega
// deep copy: this copy is  independent..phle ki copy dusre me effect nhi krega
// call by value me copy krke value paas krte h
// call by reference me actual value paas krte h

// destructor
#include<iostream>
using namespace std;
class bike{
    public:
    static int noOfBikes;  // this belongs to the class
    int tyreSize;
    int engineSize;
    //  parameterized constructor
    bike(int tyreSize,int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
        cout<<"constructor call hua"<<endl;
    }
    static void incNoOfBikes(){
        noOfBikes++;
    }
};

// void print(){
//     // int b=10;
//     static int b=10;
//     cout<<b<<endl;
//     b++;
// }

// scope resolution operator
int bike::noOfBikes=10;

int main(){
    bike tvs(11,78);
    bike honda(17,90);
    
    // cout<<honda.noOfBikes<<endl;
    // cout<<tvs.noOfBikes<<endl;

    honda.incNoOfBikes();
    cout<<honda.noOfBikes<<endl;
    cout<<tvs.noOfBikes<<endl;

    // cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    // cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;


    // print();
    // print();
    // print();
}
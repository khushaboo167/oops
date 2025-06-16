// #include<iostream>
// using namespace std;
// class bike{
//     public:
//     int tyreSize;
     
//     //  default constructor
//     bike(){
//         cout<<"constructor call hua"<<endl;
//     }
// };
// int main(){
//     bike tvs;
//     bike honda;
// }





// #include<iostream>
// using namespace std;
// class bike{
//     public:
//     int tyreSize;
//     int engineSize;
//     //  parameterized constructor
//     bike(int tyreSize,int engineSize){
//         this->tyreSize=tyreSize;
//         this->engineSize=engineSize;
//         cout<<"constructor call hua"<<endl;
//     }
// };
// int main(){
//     bike tvs(11,78);
//     bike honda(17,90);
//     cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
//     cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
// }




// // destructor
// #include<iostream>
// using namespace std;
// class bike{
//     public:
//     int tyreSize;
//     int engineSize;
//     //  parameterized constructor
//     bike(int tyreSize,int engineSize){
//         this->tyreSize=tyreSize;
//         this->engineSize=engineSize;
//         cout<<"constructor call hua"<<endl;
//     }
    

//     // destructor
//     ~bike(){
//         cout<<"destructor call hua"<<endl;
//     }
// };
// int main(){
//     bike tvs(11,78);
//     bike honda(17,90);
//     cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
//     cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
// }






// destructor
#include<iostream>
using namespace std;
class bike{
    public:
    int tyreSize;
    int engineSize;
    //  parameterized constructor
    bike(int tyreSize,int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
        cout<<"constructor call hua"<<endl;
    }
    

    // destructor
    ~bike(){
        cout<<"destructor call hua"<<endl;
    }
};
int main(){
    bike tvs(11,78);
    bike honda(17,90);
    bool flag=true;
    if(flag==true){
        bike bmw(17,1000);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    }
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
}
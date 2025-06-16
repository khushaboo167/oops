// #include<iostream>
// using namespace std;
// class complex{
//     public:
//     int img;
//     int real;
//     };
// int main(){
//     complex a1,a2;
//     a1.img=10;
//     a1.real=5;
//     a2.img=90;
//     a2.real=78;

//     complex a3;
//     a3.real=a1.real+a2.real;
//     a3.img=a1.img+a2.img;
//     cout<<"real : "<<a3.real<<" "<<"imaginary : "<<a3.img<<endl;
// }





#include<iostream>
using namespace std;

class complex {
    public:
    int img;
    int real;

    complex add(complex &c1) {
        complex c3;
        c3.img = c1.img + this->img;  // Fixed typo and added the '+' operator
        c3.real = c1.real + this->real;
        return c3;  // Return c3 instead of a3
    }
};

int main() {
    complex a1, a2;
    a1.img = 10;
    a1.real = 5;
    a2.img = 90;
    a2.real = 78;

    complex a3 = a1.add(a2);  // Pass a2 directly instead of &a2
    cout << "real : " << a3.real << " " << "imaginary : " << a3.img << endl;

    return 0;
}

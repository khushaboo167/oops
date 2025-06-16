// #include<iostream>
// using namespace std;
// int main(){
//     class Student{
//         public:
//         int roll;
//         string name;
//         float gpa;
//     };
//     Student s1;
//     s1.roll=77;
//     s1.name="raghav";
//     s1.gpa=9.6;
//     cout<<s1.roll<<" "<<s1.name<<" "<<s1.gpa;
//     cout<<endl;

//     Student s2={45,"khushaboo",8.5};
//     cout<<s2.roll<<" "<<s2.name<<" "<<s2.gpa;
//     cout<<endl;
// }





// #include<iostream>
// using namespace std;
// class Student{
//         public:
//         int roll;
//         string name;
//         float gpa;
//     };
//     void print(Student s){
//         cout<<s.roll<<" "<<s.name<<" "<<s.gpa;
//     cout<<endl;
//     }
// int main(){
//     Student s1;
//     s1.roll=77;
//     s1.name="raghav";
//     s1.gpa=9.6;
//     print(s1);

//     Student s2={45,"khushaboo",8.5};
//     print(s2);
// }






// #include<iostream>
// using namespace std;
// class car{
//         public:
//         int price;
//         string name;
//     };
//     void change(car &x){
//         x.name="honda amaze";
//         x.price=800000;

//         // x->name="honda amaze";
//         // x->price=800000;
//     }
// int main(){
//     car c1={1200000,"kia sonet"};
//     cout<<c1.name<<" "<<c1.price<<endl;

//     change(c1);
//     cout<<c1.name<<" "<<c1.price<<endl;
// }





#include<iostream>
using namespace std;
class student{
    public:
    float gpa;
    int roll;
    string name;
    student(string x, int y, float z){
        gpa=z;
        roll=y;
        name=x;
    }
};
int main(){
    student s2 = student("khush",90,8.5);
    cout<<s2.name<<endl;
}






// import React from 'react'

// const App = () => {
//   return (
//     <div>
//       Hello world
//     </div>
//   )
// }

// export default App



// import React from 'react'

// function App(){
//   return <h1>hello</h1>
// }

// export default App


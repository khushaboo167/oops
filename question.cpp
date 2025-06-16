// // create a class 'book' with name, prize and number of pages as its attributes. the class should contain following member functions:
// // ..countBook(int prize):this function will return count of all the books that have a price less than the given price
// // ...isBookPresent(string title) : this will return a boolean value indicating whether any book with the given title
// #include<iostream>
// using namespace std;
// class Book{
//     public:
//     char name;
//     int price;
//     int noOfPages;

//     int countBooks(int p){
//         if(price<p)
//         return 1;
//         else return 0;
//     }
//     bool isBookPresent(char book){
//         if(name==book)
//         return true;
//     else return false;
//     }
// };
// int main(){
//     Book harryPotter;
//     harryPotter.name='H';
//     harryPotter.price=1000;
//     harryPotter.noOfPages=500;
//     cout<<harryPotter.countBooks(1010)<<endl;
//     cout<<harryPotter.countBooks('B');

// }








// Q2..create a class "cricketer" that contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match.
// create an array of data type "cricketer" to told records of 20 such cricketers and then write a program to read these records
#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int age;
    int noOfTestMatches;
    int avgScore;
};
int main(){
    cricketer virat;
    virat.name='v';
    virat.age=23;
    virat.noOfTestMatches=100;
    virat.avgScore=80;

    cricketer dhoni;
    dhoni.name='d';
    dhoni.age=29;
    dhoni.noOfTestMatches=200;
    dhoni.avgScore=90;

    for(int i=0;i<2;i++){
        cout<<cricketer[i].name<<endl;
        cout<<cricketer[i].age<<endl;
        cout<<cricketer[i].noOfTestMatches<<endl;
        cout<<cricketer[i].avgScore<<endl;
    }
}
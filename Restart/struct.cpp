#include<iostream>
using namespace std;

struct student
{
    /* data */
    string Name;
    int RollNumber;
    char Section;
    float CGPA;
};

int main(){
    struct student one ;
    one.Name = "Ankit" ;
    one.RollNumber = 001;
    one.Section = 'A' ;
    one.CGPA = 8.7;


    struct student two;
    two.Name = "Shadab";
    two.RollNumber = 002;
    two.Section = 'A' ;
    two.CGPA = 9.1 ;

    cout << one.CGPA << "\n" ;

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

//Parent Class
class Person{    
    public:

    string name;
    int age;
    string gender;

    void grow(int newAge){
        age = newAge;
    }

};

//Child Class
class Student : public Person{       // Inheritance     // Single Inheritance
    public: 
    int rollNo;

    void details(){
        cout << name << " " << age << " " << gender << " " << rollNo << "\n";
    }
    
};

class GraduateStudent : public Student{      // Multilevel Inheritance
    public:
    string branch;

    void getInfo(){
        cout << name << " " << age << " " << gender << " " << rollNo << " " << branch << "\n" ;
    }

};

class PHDStudent : public Person, public GraduateStudent{
    public:
    int year;

};

int main(){
    Person p1;
    p1.name = "Amit";
    p1.age = 15;
    p1.gender = "Male";
    
    Student s1;
    s1.name = "Raj";
    s1.age = 22;
    s1.gender = "MALE";
    s1.rollNo = 052;

    Student s2;
    s2.name = "Ankit";
    s2.age = 21;
    s2.gender = "MALE";
    s2.rollNo = 004;

    cout << "The details of Students s1:" << "\n";

    s1.details();

    s2.grow(22);

    cout << s2.age << "\n";

    cout << "The details of graduateStudent g1:" << "\n";

    GraduateStudent g1;
    g1.name = "Ajay";
    g1.age = 24;
    g1.gender = "Male";
    g1.rollNo = 002;
    g1.branch = "CSE";

    g1.getInfo();

    PHDStudent p1;
    p1.

    return 0;
}
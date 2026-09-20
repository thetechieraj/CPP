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
        cout << name << "\n";
        cout << age << "\n";
        cout << gender << "\n";
        cout << rollNo << "\n";
    }
    
};

class Employee : public Student{      // Multilevel Inheritance
    public:
    int id;

    void getInfo(){
        cout << name << "\n";
        cout << age << "\n";
        cout << gender << "\n";
        cout << rollNo << "\n";
        cout << id << "\n";
    }

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
    s1.rollNo = 50052;

    Student s2;
    s2.name = "Ankit";
    s2.age = 21;
    s2.gender = "MALE";
    s2.rollNo = 50004;

    s1.details();

    s2.grow(22);

    cout << s2.age << "\n";

    Employee e1;
    e1.name = "Ajay";
    e1.age = 24;
    e1.gender = "Male";
    e1.rollNo = 50006;
    e1.id = 001;

    e1.getInfo();

    return 0;
}
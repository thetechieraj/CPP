#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:

    string name;
    int id;
    string subjectName;
    float salary;


    //Parameterised Constructor
    Teacher(string name, int id, string subjectName, float salary){
        this-> name = name;
        this-> id = id;
        this-> subjectName = subjectName;
        this-> salary = salary;
    }

    //Member Function
    void getInfo(){
        cout << name << " " << id << " " << subjectName << " " << salary << "\n"; 

        return;
    }

};

int main(){
    Teacher t1("Amit", 101, "Maths", 25000);
    Teacher t2("Chandan", 102, "Computer", 30000);
    Teacher t3("Neeraj", 103, "DSTL", 35000);

    //Object Pointer

    Teacher* ptr = &t1;

    cout << t1.id << "\n";
    cout << (*ptr).id << "\n";    // We can use ptr-> in place of (*ptr). for convenience.
    cout << ptr->id << "\n";


    int a = 5;
    int* b = new int(8);
    cout << b << "\n";
    cout << *b << "\n";

    //Obeject Pointer
    
    Teacher* t4 = new Teacher("Puneet", 104, "AI", 40000);

    t1.getInfo();
    t2.getInfo();
    t3.getInfo();
    t4->getInfo();

    return 0;
}
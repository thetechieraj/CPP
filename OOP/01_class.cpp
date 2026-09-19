#include<iostream>
using namespace std;

class teacher{
    public:

    string name;
    string department;
    string subjectt;

    void changeDepartment(string newDept){
        department = newDept;
    }

    private:

    int salary;

};

int main(){

    teacher t1;

    t1.name = "raj";
    t1.department = "cse";
    t1.subjectt = "maths";

    cout << t1.department;

    t1.changeDepartment("ece");

    return 0;
}
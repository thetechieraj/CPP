#include <iostream>
#include <string>
using namespace std;

class Student{   //Class
    public:

    string name;
    int age;
    float height;
    
    Student(){   // Default Constructor

    };

    Student(string n, int a, float h){        // Parameterised Constructor
        name = n; 
        age = a;
        height = h;
    } 

    void getInfo(){
        cout << name << " " << age << " " << height << "\n";
    }

};  

int main(){
    Student one("Ankit", 21, 6.2);

    one.getInfo();

    Student two;

    two.name = "Ajay";
    two.age = 20;
    two.height = 5.8;

    two.getInfo();

    return 0;
}
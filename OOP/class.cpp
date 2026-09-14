#include <iostream>
#include <string>

using namespace std;

class car{
    public:

    // Data members (Attributes)
    string name;
    int manufacturingYear;
    string color;

    //Member Functions
    void display(){
        cout << name << "\n" << manufacturingYear << "\n" << color;
    }

};

int main(){
    car mg;
    mg.name = "hector";
    mg.manufacturingYear = 2024;
    mg.color = "black";

    mg.display();

    return 0;
}
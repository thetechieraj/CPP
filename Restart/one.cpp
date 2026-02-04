#include<iostream>
using namespace std;

int main(){
    cout << "Hello World\n";

    int a = 5;
    int* x = &a ;

    cout << a << "\n";
    cout << &a << "\n";

    cout << x << "\n";

    return 0;
}
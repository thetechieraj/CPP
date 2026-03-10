// '&' is called 'Address Of' operator.
// Pointers are the special variable that stores the address of other variables.
// '*' is called 'Dereference Operator' or 'Value at address' operator;


#include <iostream>

using namespace std;

int main(){
    // int one = 5 ;
    // int* ptr = &one ;

    // cout << &one << "\n" ;
    // cout << ptr << "\n" ;
    // cout << *ptr << "\n" ;

    // int** ptr2 = &ptr ;

    // cout << &ptr << "\n" ;
    // cout << ptr2 << "\n" ;
    // cout << *ptr2 << "\n" ;

    float one = 3.14;
    float* two = &one;
    float** three = &two;

    cout << "\nThe value of variable one is : " << one << "\n";

    cout << "\nThe address of variable one is : " << &one << "\n";

    cout << "\nThe value of pointer variable two is : " << two << "\n";

    cout << "\nThe address of pointer variable two is : " << &two << "\n";

    cout << "\nThe value of pointer to pointer variable three is : " << three <<"\n";

    cout << "\nThe address of pointer to pointer variable three is : " << &three <<"\n";

    cout << "\nThe value at address of three : " << *(&three) << "\n";

    cout << "\nThe value at " << **(&three)<<"\n";

    return 0;
}
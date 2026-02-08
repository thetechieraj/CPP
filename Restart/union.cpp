#include<iostream>
using namespace std;

union example
{
    /* data */
    int one;
    float two;
    char three;
};

int main(){
    union example m1;
    m1.two = 5.2;
    m1.one = 9 ;

    cout << m1.one; 
    
    return 0;
}
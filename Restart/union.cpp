#include<iostream>>
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

    cout << m1.two; 
    
    return 0;
}
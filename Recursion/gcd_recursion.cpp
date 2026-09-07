#include<iostream>
using namespace std;

int gcd(int x, int y){
    if( x == 0) return y;

    return gcd(y % x, x);
}

int main(){
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;

    cout << "The gcd is : " << gcd(a, b);

    return 0;
}
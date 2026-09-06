#include <iostream>
using namespace std;

long long binaryExponentiation(long long a, long long n){
    if(n == 0) return 1;

    long long half = binaryExponentiation(a, n/2);

    // If n is even
    if (n % 2 == 0)
        return half * half;

    // If n is odd
    return a * half * half;
}

int main() {
    long long a, n;

    cout << "Enter base: ";
    cin >> a;

    cout << "Enter exponent: ";
    cin >> n;

    cout << a << "^" << n << " = " << binaryExponentiation(a, n) << endl;

    return 0;
}
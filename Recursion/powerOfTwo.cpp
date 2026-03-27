#include<iostream>

using namespace std;

bool powerOfTwo(int n){
    if(n <= 0) return false;
    if(n == 1) return true; 

    if(n % 2 != 0) return false;

    return powerOfTwo(n/2);
}

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    if(powerOfTwo(n)) cout << "It is a power of two." << "\n";
    else cout << "It is not a power of two." << "\n";

    return 0;
}
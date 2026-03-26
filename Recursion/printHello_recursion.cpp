#include<iostream>
using namespace std;

void printHello(int n){
    if(n == 0){
        return;
    }
    cout << "Hello" << "\n";

    printHello(n-1);
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    printHello(n);

    return 0;
}
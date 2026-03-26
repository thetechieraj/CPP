#include<iostream>

using namespace std;

void table(int n, int i){
    if(n == i){
        cout << n << " X " << i << " = " << n*i << "\n" ;
        return;
    }

    cout << n << " X " << i << " = " << n*i << "\n";

    table(n, i+1);

    return;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int st = 1;

    table(n, st);

    return 0;
}
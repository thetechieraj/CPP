#include<iostream>
using namespace std;

int sum(int x){
    if(x==0) return 0;

    return x + sum(x-1);
}


int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    cout << "The sum is : " << sum(n);

    return 0;
}
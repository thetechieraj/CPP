#include<iostream>
using namespace std;

bool checkPrime(int x){
    if(x == 0 || x == 1){
        return false;
    }
    else{
        for(int i = 2; i*i <= x; i++){
        if(x % i == 0){
            return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for(int i = 2; i <= n; i++){
        if(checkPrime(i)) cout << i << " ";
    }

    return 0;
}
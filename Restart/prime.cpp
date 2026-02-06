#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    bool isPrime = true ; 

    if(n<=1){
        isPrime = false ;
    }
    else{
        for(int i = 2 ; i < n ; i++ ){
            if(n%i==0){
                isPrime = false ;
                break ;
            }
        }
    }

    if(isPrime){
        cout << "It is Prime." << "\n";
    }else{
        cout << "It is not Prime." << "\n";
    }

    return 0;
}
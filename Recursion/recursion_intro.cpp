#include<iostream>
using namespace std;

//Simple recurtion funtion for printing numbers from n to 1.
void printNum(int n){
    if(n==1){             // Base Case (where the funtion stops)
        cout << "1\n";

        return;
    }

    cout << n << " ";

    printNum(n-1);
}

int main(){

    printNum(10);

    return 0;
}
#include<iostream>
using namespace std;

void print(int x){
    if(x == 0) return;     // Base Case

    print(x-1);            // Call

    cout << x << " ";      // Work
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    print(n);

    return 0;



    
}
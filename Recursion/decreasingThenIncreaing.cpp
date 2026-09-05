#include<iostream>
using namespace std;

void print(int x){
    if(x == 0) return;

    cout << x << " ";

    print(x-1);

    if(x != 1) cout << x << " ";

}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    print(n);

    return 0;
}
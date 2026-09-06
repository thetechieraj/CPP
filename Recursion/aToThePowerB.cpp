#include<iostream>
using namespace std;

int power(int x, int y){
    if(y==0) return 1;

    return x * power(x,y-1);
}

int main(){
    int a,b;
    cout << "Enter the numbers : ";
    cin >> a >> b;

    cout << "The answer is : " << power(a,b);

    return 0;
} 
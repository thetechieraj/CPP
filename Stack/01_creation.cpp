#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> one;

    one.push(5);
    one.push(10);
    one.push(15);
    one.push(20);
    one.pop();

    cout << one.top();

    return 0;
}
#include<iostream>
#include<stack>

using namespace std;

void traversal(stack<int> &one){
    int n = one.size();

    stack<int> temp;

    for(int i = 0; i < n; i++){
        cout << one.top() << "\n";

        temp.push(one.top());

        one.pop();
    }

    for(int i = 0; i < n; i++){
        one.push(temp.top());

        temp.pop();
    }
}

void reverseTraversal(stack<int> &one){
    int n = one.size();

    stack<int> temp;

    for(int i = 0; i < n; i++){
        temp.push(one.top());

        one.pop();
    }

    for(int i = 0; i < n; i++){
        cout << temp.top() << "\n";

        one.push(temp.top());

        temp.pop();
    }
}

int main(){
    stack<int> one;

    one.push(01);
    one.push(02);
    one.push(03);
    one.push(04);
    one.push(05);

    traversal(one);

    cout << "\n";

    reverseTraversal(one);

    return 0;
}
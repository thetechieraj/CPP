#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void reverse(queue<int> &q){
    stack<int> s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

void print(queue<int> &q){
    int n = q.size();

    for(int i = 0; i < n; i++){
        cout << q.front() << " ";

        q.push(q.front());
        q.pop();;
    }
}

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    print(q); 
    
    cout << "\n";

    reverse(q);

    print(q);

    return 0;
}
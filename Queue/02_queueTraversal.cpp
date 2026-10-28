#include<iostream>
#include<queue>

using namespace std;

void traversal(queue<int> &q){
    int n = q.size();

    for(int i = 0; i < n; i++){
        cout << q.front() << "\n";

        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    traversal(q);

    return 0;
}

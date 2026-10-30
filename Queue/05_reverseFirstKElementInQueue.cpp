
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseFirstK(int k, queue<int>& q) {
    int n = q.size();

    if (k <= 0 || k > n)
        return;

    stack<int> s;

    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }
}

void print(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseFirstK(3, q);

    print(q);

    return 0;
}

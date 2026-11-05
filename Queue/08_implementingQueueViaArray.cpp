#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
    int length;
    int f;
    int r;
    vector<int> arr;

public:
    Queue(int capacity) {
        f = 0;
        r = 0;
        length = 0;
        arr.resize(capacity);
    }

    void push(int val) {
        if (length == arr.size()) {
            cout << "Queue is Full\n";
            return;
        }

        arr[r] = val;
        r = (r + 1) % arr.size();
        length++;
    }

    void pop() {
        if (length == 0) {
            cout << "Queue is Empty\n";
            return;
        }

        f = (f + 1) % arr.size();
        length--;
    }

    int front() {
        if (length == 0) {
            cout << "Queue is Empty\n";
            return -1;
        }

        return arr[f];
    }

    int size() {
        return length;
    }

    int capacity() {
        return arr.size();
    }

    void print() {
        if (length == 0) {
            cout << "Queue is Empty\n";
            return;
        }

        for (int i = 0; i < length; i++) {
            cout << arr[(f + i) % arr.size()] << " ";
        }

        cout << endl;
    }
};

int main() {
    Queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Queue elements: ";
    q.print();

    cout << "Size: " << q.size() << endl;
    cout << "Capacity: " << q.capacity() << endl;
    cout << "Front: " << q.front() << endl;

    q.pop();
    q.pop();

    cout << "\nAfter popping:\n";

    cout << "Queue elements: ";
    q.print();

    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;

    q.push(5);
    q.push(6);

    cout << "\nAfter pushing 5 and 6:\n";
    q.print();

    q.push(7);

    return 0;
}
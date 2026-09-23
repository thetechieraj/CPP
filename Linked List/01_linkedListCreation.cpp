#include<iostream>
using namespace std;

class Node{
    public:

    int val;
    Node* next;

    Node(int val){
        this->val = val;
    }
};

int main(){
    // Node a(7);
    // Node b(0);
    // Node c(3);
    // Node d(8);

    // a.next = &b;
    // b.next = &c;
    // c.next = &d;
    // d.next = NULL;

    // cout << (*(a.next)).val;
    // cout << (a.next)->val;

    Node* a = new Node(7);
    Node* b = new Node(0);
    Node* c = new Node(3);

    a->next = b;
    b->next = c;
    c->next = NULL;

    cout << a->val << "\n";
    cout << a->next->val << "\n";
    cout << a->next->next->val << "\n";

    return 0;
}
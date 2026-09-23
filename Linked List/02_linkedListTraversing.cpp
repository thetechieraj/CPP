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

void printByLoop(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void printByRecursion(Node* head){
    if(head == NULL) return;

    cout << head->val << " "; 
    printByRecursion(head->next);
    cout << head->val << " "; 
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);

    a->next = b;
    b->next = c;
    c->next = NULL;

    printByLoop(a);

    cout << "\n";

    printByRecursion(a);


    return 0;
}
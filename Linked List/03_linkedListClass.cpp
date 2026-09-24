#include<iostream>
using namespace std;

class Node{      // User Defined Datatype
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int length;
    
    LinkedList(){
        head = tail = NULL;
        length = 0;
    }

    void print(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << "\n";
    }

    void insertAtTail(int val){
        Node* n = new Node(val);
        
        if(length == 0){
            head = tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }

        length++;
    }
};

int main(){
    LinkedList one;

    one.insertAtTail(8);
    one.insertAtTail(5);
    one.insertAtTail(7);

    one.print();

    return 0;
}
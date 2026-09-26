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
private:
    Node* head;
    Node* tail;
    int length;

public:

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

    void insertAtHead(int num){
        Node* n = new Node(num);

        if(length == 0){
            head = tail = n;
        }
        else{
            n->next = head;
            head = n;
        }

        length++;
    }

    void removeAtHead(){
        if(length == 0){
            cout << "List is Empty!" << "\n";
            return;
        }

        head = head->next;
        length--;
    }

    int size(){
        return length;
    }

    void insert(int index, int val){
        Node* n = new Node(val);

        Node* temp = head;

        for(int i = 0; i < index-1; i++){
            temp = temp->next;
        }

        n->next = temp->next;
        temp->next = n;

        length++;
    }
};

int main(){
    LinkedList one;

    one.insertAtTail(8);
    one.insertAtTail(5);
    one.insertAtTail(7);

    // one.print();

    // one.insertAtHead(4);
    // one.insertAtHead(1);

    // one.print();

    // one.removeAtHead();

    // one.print();

    // cout << one.size();

    one.insert(2,9);
    one.insert(1,10);

    one.print();

    return 0;
}
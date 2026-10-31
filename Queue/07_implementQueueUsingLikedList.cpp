#include<iostream>

using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = nullptr;
    }
};

class Queue{
private:   
    Node* head;
    Node* tail;
    int length;

public:
    Queue(){
        head = tail = 0;
        length = 0;
    }

    void insertAtTail(int num){   // q.push()
        Node* n = new Node(num);

        if(length == 0){
            head = tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }

        length++;
    }

    void removeAtHead(){   // q.pop()
        Node* toBeDeleted = head;

        head = head->next;

        delete toBeDeleted;

        length--;
    }

    void print(){
        Node* temp = head;

        while(temp != 0){
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << "\n";
    }

    int size(){
        return length;
    }
    
    int front(){
        return head->val;
    }
};

int main(){
    Queue q;

    q.insertAtTail(10);
    q.insertAtTail(20);
    q.insertAtTail(30);
    q.insertAtTail(40);
    q.insertAtTail(50);
    q.removeAtHead();

    q.print();

    cout << q.size() << "\n";

    cout << q.front() << "\n";

    return 0;
}
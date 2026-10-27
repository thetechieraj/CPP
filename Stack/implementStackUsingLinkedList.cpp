// Time Complexity is O(1)

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

class Stack{
private:
    Node* head;
    Node* tail;
    int length;

public:
    Stack(){
        head = tail = nullptr;
        length = 0;
    }

    void insertAtHead(int num){      // .push()
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

    void removeAtHead(){     // .pop()
        if(length == 0){
            cout << "Stack is Empty!";
        }

        Node* toBeDeleted = head;
        head = head->next;

        delete toBeDeleted;

        length--;
    }

    void print(){
        Node* temp = head;

        while(temp != 0){
            cout << temp->val << "\n";
            temp = temp->next;
        }
    }

    int size(){
        return length;
    }
};

int main(){
    Stack st;

    st.insertAtHead(10);
    st.insertAtHead(20);
    st.insertAtHead(30);
    st.insertAtHead(40);
    st.insertAtHead(50);
    st.removeAtHead();
    st.removeAtHead();

    st.print();
    st.size();

    return 0;
}
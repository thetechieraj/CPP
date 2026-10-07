#include<iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val = val;
        next = nullptr;
    }
};

class LinkedList{
private:
    ListNode* head;
    ListNode* tail;
    int length;

public:
    LinkedList(){
        head = nullptr;
        tail = nullptr;
        length = 0;
    }

    void print(){
        ListNode* temp = head;

        while(temp != NULL){
            cout << temp->val << "\t";
            temp = temp->next;
        }

        cout << "\n";
    }

    void insertAtEnd(int val){
        ListNode* n = new ListNode(val);

        if(length == 0){
            head = tail = n;
        }

        tail->next = n;
        tail = n;

        length++;
    }
};


// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//     ListNode dummy(0);
//     ListNode* tail = &dummy;

//     while(list1 != nullptr && list2 != nullptr){
//         if(list1->val <= list2->val){
//             tail->next = list1;
//             list1 = list1->next;
//         } 
//         else{
//             tail->next = list2;
//             list2 = list2->next;
//         }

//         tail = tail->next;
//     }

//     if(list1 != nullptr)
//         tail->next = list1;
//     else
//         tail->next = list2;

//         return dummy.next;
// }

int main(){
    LinkedList one;
    LinkedList two;

    one.insertAtEnd(1);

    one.print();

    
    return 0;
}
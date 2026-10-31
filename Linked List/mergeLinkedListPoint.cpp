#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Find the merge point using two pointers
int findMergeNode(Node* head1, Node* head2) {

    Node* p1 = head1;
    Node* p2 = head2;

    while (p1 != p2) {

        p1 = (p1 == nullptr) ? head2 : p1->next;

        p2 = (p2 == nullptr) ? head1 : p2->next;
    }

    return (p1 != nullptr) ? p1->data : -1;
}

int main() {

    int n, m;

    // Input first linked list
    cout << "Enter size of first linked list: ";
    cin >> n;

    Node* head1 = nullptr;
    Node* tail1 = nullptr;

    cout << "Enter elements of first linked list: ";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if (head1 == nullptr) {
            head1 = tail1 = newNode;
        }
        else {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    // Input second linked list
    cout << "Enter size of second linked list: ";
    cin >> m;

    Node* head2 = nullptr;
    Node* tail2 = nullptr;

    cout << "Enter elements of second linked list: ";

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if (head2 == nullptr) {
            head2 = tail2 = newNode;
        }
        else {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    // Input merge position in first list
    int pos;
    cout << "Enter merge position in first list (0-based): ";
    cin >> pos;

    if (pos < 0 || pos >= n || head2 == nullptr) {
        cout << "Invalid merge position\n";
        return 0;
    }

    // Find the actual merge node in first list
    Node* mergeNode = head1;

    for (int i = 0; i < pos; i++) {
        mergeNode = mergeNode->next;
    }

    // Connect second list to the same node
    tail2->next = mergeNode;

    // Find and print merge point
    int ans = findMergeNode(head1, head2);

    cout << "Merge Point: " << ans << endl;

    return 0;
}

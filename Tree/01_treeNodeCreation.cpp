#include<iostream>
#include<climits>

using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};

void printTree(Node* root){
    if(root == nullptr) return;

    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int size(Node* root){
    if(root == nullptr) return 0;

    return 1 + size(root->left) + size(root->right);
}

int sum(Node* root){
    if(root == nullptr) return 0;

    return root->val + sum(root->left) + sum(root->right);
} 

long long int product(Node* root){
    if(root == nullptr) return 1;

    return root->val * product(root->left) * product(root->right);
}

int maxInTree(Node* root){
    if(root == nullptr) return INT_MIN;

    int maxLeft = maxInTree(root->left);
    int maxRight = maxInTree(root->right);

    return max(root->val, max(maxLeft, maxRight));
}

int minInTree(Node* root){
    if(root == nullptr) return INT_MAX;

    int minLeft = minInTree(root->left);
    int minRight = minInTree(root->right);

    return min(root->val, min(minLeft, minRight));
}

int levels(Node* root){
    if(root == nullptr) return 0;

    return 1 + max(levels(root->left), levels(root->right));
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    Node* h = new Node(80);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    e->left = h;

    printTree(a);

    cout << "\n";

    cout << size(a) << "\n";

    cout << sum(a) << "\n";

    cout << product(a) << "\n";

    cout << maxInTree(a) << "\n";

    cout << minInTree(a) << "\n";

    cout << levels(a) << "\n";

    return 0;
}
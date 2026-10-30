#include<iostream>
#include<queue>

using namespace std;

void insertAtIndex(int idx, int num, queue<int> &q){
    int n = q.size();

    for(int i = 0; i < idx; i++){
        q.push(q.front());
        q.pop();
    }

    q.push(num);

    for(int i = 0; i < n-idx; i++){
        q.push(q.front());
        q.pop();       
    }
}

// void removeAtIndex(int idx, queue<int> &q){
//     int n = q.size();

//     for(int i = 0; i < n; i++){
//         q.push(q.front());
//         q.pop();
//     }

//     q.pop();
    
//     for(int i = 0; i < n-idx; i++){
//         q.push(q.front());
//         q.pop();
//     }
// }

// int get(int idx, queue<int> &q){

// }

void print(queue<int> &q){
    int n = q.size();

    for(int i = 0; i < n; i++){
        cout << q.front() << " ";

        q.push(q.front());
        q.pop();;
    }
}

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    print(q);

    insertAtIndex(2, 50, q);
    
    cout << "\n";
    print(q);

    removeAtIndex(2, q);

    cout << "\n";
    print(q);

    return 0;
}
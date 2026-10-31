#include<iostream>
#include<queue>

using namespace std;

int winner(int n, int k){
    queue<int> q;

    for(int i = 1; i <= n; i++){
        q.push(i);
    }

    while(q.size() != 1){
        for(int i = 0; i < k-1; i++){
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }

    return q.front();
}

int main(){
    int n;
    cout << "Number of Players : ";
    cin >> n;

    int k;
    cout << "Enter k : ";
    cin >> k;

    int ans =  winner(n, k);

    cout << "The winner is : " << ans;

    return 0;
}
#include <iostream>

using namespace std;

int solve(int n, int r) {
    // Your code here    
    int facN = 1;
    int facR = 1;
    int solve;
    
    for ( int i = 1 ; i <= n ; i++ ){
        facN = facN * i;
    }
    
    for ( int i = 1 ; i <= r ; i++ ){
        facR = facR * i;
    }

    solve = (facN / (facN - facR)) ;
    
    return solve ;
}

int main() {
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = solve(n, b);
    cout << res << endl;
}
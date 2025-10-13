#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n = 5;

    int arr[n] = {3,4,-5,6,-7};

    int maxSum = INT_MIN ;

    for ( int i = 0 ; i < n ; i++ ){
        int currentSum = 0 ;
        currentSum += arr[i] ;

        maxSum = max(currentSum,maxSum);

        if ( currentSum < 0 ){
            currentSum = 0;
        }
    } 

    cout << "The sum of maximum subarray is " << maxSum  << "\n" ;

    return 0;
}
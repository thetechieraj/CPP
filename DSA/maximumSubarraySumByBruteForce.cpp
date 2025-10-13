#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n = 5 ;
    int arr[n] = {1,6,3,8,5} ;
    
    int maxsum = INT_MIN ;

    for ( int st = 0 ; st < n ; st++ ){
        int currentSum = 0 ;
        for ( int end = st ; end < n ; end++ ){
            currentSum += arr[end];
            maxsum = max(currentSum,maxsum);
        }
    }

    cout << "The sum of maximum subarray is : " << maxsum << "\n" ;

    return 0;
}
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n ;
    cout << "Enter the number of elements in array : ";
    cin >> n ;

    int arr[n];

    cout << "Enter " << n << " Elements : " ;
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    }

    int largest = INT_MIN ;
    int secondLargest = INT_MIN ;

    for ( int i = 0 ; i < n ; i++ ){
        if(arr[i] > largest){
            secondLargest = largest ;
            largest = arr[i] ;
        }
        else if( arr[i] > secondLargest && arr[i] < largest ){
            secondLargest = arr[i] ;
        }
    }

    if (secondLargest == INT_MIN){
        cout << "Elements of the array are same. " <<   "\n" ;
    }else{
        cout << "The largest is : " << largest << "\n" ;
        cout << "The second largest is : " << secondLargest << "\n" ;
    }

    return 0;
} 
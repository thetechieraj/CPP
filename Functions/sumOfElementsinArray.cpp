#include<iostream>
using namespace std;

int sumOfElements(int arr[],int s){
    int sum = 0 ;
    for ( int i = 0 ; i < s ; i++ ){
        sum = sum + arr[i] ;
    }
    return sum ;
}

int main(){
    int arr[10];

    int n ;
    cout << "Enter the number of elements in array : " ;
    cin >> n ;
    
    cout << "Enter " << n << " elements : " << "\n" ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    } 

    cout << "The sum of all elements of array is : " << sumOfElements(arr,n)  << "\n";

    return 0;
}
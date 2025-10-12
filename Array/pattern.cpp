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

    for( int i = 0 ; i < n ; i ++ ){
        if(arr[i] > largest){
            largest = arr[i] ;
        }
    }

    while(largest > 0){
        for(int i = 0 ; i < n ; i++ ){
            if( arr[i] >= largest ){
                cout << "*\t" ;
            }else{
                cout << " \t" ;
            }
        }
        cout << "\n" ;
        largest-- ;
    }

    return 0;
}
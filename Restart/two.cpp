#include<iostream>
using namespace std;

int main(){
    // int twod[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} } ;

    // for ( int i = 0 ; i < 3 ; i++ ){
    //     for ( int j = 0 ; j < 3 ; j++ ){
    //         cout << twod[i][j] << endl ;
    //     }
    // }

    int arr[3][2] ;

    cout << "Enter the elements : " ;

    for ( int i = 0 ; i < 3; i++ ){
        for ( int j = 0 ; j < 2 ; j++ ){
            cin >> arr[i][j] ;
        }
    }
    cout << "Elements in the array : " ;
    
    for ( int i = 0 ; i < 3 ; i++ ){
        for ( int j = 0 ; j < 2 ; j++ ){
            cout << arr[i][j] << " " ;
        }
    }
    
    return 0;
}
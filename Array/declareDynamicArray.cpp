#include<iostream>
using namespace std;

int main(){
    int m ;
    cout << "Enter the size of array : ";
    cin >> m;

    int* one = new int[m];
    cout << "Enter elements of array : ";

    for( int i = 0 ; i < m ; i++ ){
        cin >> one[i] ;
    }
    
    cout << "The array is : " ;
    
    for( int i = 0 ; i < m ; i++ ){
        cout << one[i] ;
    }

    delete[] one;

    return 0;
}

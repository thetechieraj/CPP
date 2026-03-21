#include<iostream>
using namespace std;

int diagonalSum(int mat[][3],int n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += mat[i][i];         //Primary Diagonal

        if(i != n-i-1){
            sum += mat[i][n-i-1];  //Secondary Diagonal
        }
    }
    return sum;
}

int main(){
    int n = 3;
    int mat[3][3] = {{5,6,9},{7,9,6},{9,7,2}};
    
    cout << "The diagonal sum is : " << diagonalSum(mat,n);
    return 0;
}
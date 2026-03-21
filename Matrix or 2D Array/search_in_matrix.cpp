#include<iostream>
using namespace std;

pair<int,int> linearSearch(int mat[][3],int rows, int cols, int target){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(mat[i][j] == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    int mat[4][3] = {{5,6,9},{7,9,6},{9,2,7},{6,7,3}};
    int rows = 4;
    int cols = 3;
    int target = 2;

    pair<int,int> result = linearSearch(mat,rows,cols,target);

    cout << "The indexes are : " << result.first << " " << result.second;

    return 0;
}
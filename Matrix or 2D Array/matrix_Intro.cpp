#include <iostream>
using namespace std;

int main(){

    //CREATION
    int mat[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rows = 3;
    int cols = 4;

    //INPUT
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> mat[i][j];
        }
    }

    //OUTPUT
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
   
    return 0;
}
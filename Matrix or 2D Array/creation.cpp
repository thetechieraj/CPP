#include<iostream>

using namespace std;

int main(){
    int mat[4][3] = {{1,2,3},{4,5,13},{7,8,9},{10,11,12}};

    int target = 11;

    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] == target){
                 cout << "The array index are : "<< i << "," << j<< endl;
            }
        }
    }

    return 0;
}
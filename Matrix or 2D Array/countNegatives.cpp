#include<iostream>
#include<vector>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(grid[i][j] < 0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<vector<int>> mat = {{3,9,-7,5},{8,-4,-1,4},{-6,0,-5,-2}};

    cout << "The total negative numbers are : " << countNegatives(mat);

    return 0;
}
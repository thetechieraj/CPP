#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> one;

    //2D vector/aray Creation
    vector< vector<int> > name(5, vector<int>(4,0));  //2d vector/array created with 5 rows, 4 columns and with initial value of each cell has "0";
    

    int totalRows = name.size();
    int totalColumn = name[0].size();

    cout << totalRows << " " << totalColumn << "\n";
 

    // Jaggered 2D Array/Vector Creation
    vector<vector<int>> jag(5);
    jag[0] = vector<int>(3);
    jag[1] = vector<int>(5);
    jag[2] = vector<int>(2);
    jag[3] = vector<int>(4);
    jag[4] = vector<int>(6);
    // Array created with 5 rows and (3,5,2,4,6) colums.

    int noOfRows = jag.size();

    cout << noOfRows;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));

        int srow = 0, erow = n - 1;
        int scol = 0, ecol = n - 1;
        int val = 1;

        while (srow <= erow && scol <= ecol) {
            // Top
            for (int j = scol; j <= ecol; j++) {
                ans[srow][j] = val++;
            }
            srow++;

            // Right
            for (int i = srow; i <= erow; i++) {
                ans[i][ecol] = val++;
            }
            ecol--;

            // Bottom
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    ans[erow][j] = val++;
                }
                erow--;
            }

            // Left
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans[i][scol] = val++;
                }
                scol++;
            }
        }
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    Solution obj;
    vector<vector<int>> result = obj.generateMatrix(n);

    cout << "Spiral Matrix:\n";
    for (const auto &row : result) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }

    return 0;
}
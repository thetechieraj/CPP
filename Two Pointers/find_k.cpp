#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<bool> vis(n, false);

        for (int j = 0; j < n; j++) {
            if (nums[j] == key) {

                int left = max(0, j - k);
                int right = min(n - 1, j + k);

                for (int i = left; i <= right; i++) {
                    vis[i] = true;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (vis[i]) ans.push_back(i);
        }

        return ans;
    }
};
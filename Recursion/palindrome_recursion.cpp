#include <iostream>
#include <vector>

using namespace std;

void reverseVec(vector<int> &vec, int st, int end) {
    if (st >= end) return;

    swap(vec[st], vec[end]);
    reverseVec(vec, st + 1, end - 1);
}

bool isPalindrome(vector<int> &nums, vector<int>& reversed, int index) {
    if (index == nums.size()) return true;

    if (nums[index] != reversed[index]) return false;

    return isPalindrome(nums, reversed, index + 1);
}

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> reversed = nums;
    reverseVec(reversed, 0, n - 1);

    if (isPalindrome(nums, reversed, 0)) {
        cout << "The vector is a palindrome." << endl;
    } else {
        cout << "The vector is NOT a palindrome." << endl;
    }

    return 0;
}
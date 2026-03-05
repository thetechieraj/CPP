#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }
    return count <= 1;
}

int main(){
    vector<int> nums = {4,5,1,2,3};

    if(check(nums)){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }

    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

vector<int> smallestIndex(vector<int> nums){
    int n = nums.size();

    vector<int> ans;

    int min = INT_MAX;

    for(int i = 0; i < n-1; i++){
        int product = nums[i] * nums[i+1];

        if(product < min){
            min = product;
            ans.push_back(i);
            ans.push_back(i+1);
        }
        
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4};

    cout << smallestIndex(nums) ;

    return 0;
}
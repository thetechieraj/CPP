#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int> nums){
    int n = nums.size()-1;

    for(int i = n; i >= 0; i--){
        if(nums[i] < 9){
            nums[i]++;
            return nums;
        }
        else{
            nums[i] = 0;
        }
    }

    nums.insert(nums.begin(), 1);

    return nums;
}

int main(){
    vector<int> one = {1,2,9};

    vector<int> result = plusOne(one);

    for(int x : result){
        cout << x << " ";
    }

    return 0;
}
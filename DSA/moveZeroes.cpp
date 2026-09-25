#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums){
    int i = 0;

    for(int j = 0; j < nums.size(); j++){
        if(nums[j] != 0){
            nums[i++] = nums[j];
        }
    }

    for(   ; i < nums.size(); i++){
        nums[i] = 0;
    }
}

int main(){
    vector<int> one = {0,0,0,3,0,5,0,7,4};

    moveZeroes(one);

    for(int ans: one){
        cout << ans << " ";
    }

    return 0;
}
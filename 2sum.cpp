#include<iostream>
using namespace std;

bool bruteForce(vector<int> nums, int tar){
    int n = nums.size();

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i] + nums[j] == tar){
                return true;
            }
        }
    }
    return false;
}

bool better(vector<int> nums, int tar){
    sort(nums.begin(),nums.end());

    int st = 0, end = nums.size()-1;

    while(st < end){
        int sum = nums[st] + nums[end] ;
        
        if(sum < tar) st++;
        else if(sum > tar) end--;
        else return true;

        }

    }
    return false;
}

int main(){
    vector<int> vec = {5,2,11,7,15};    
    int target = 9;

    cout << bruteForce(vec, target);

    return 0;
}
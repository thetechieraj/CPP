#include<iostream>
#include<vector>

using namespace std;

bool isSorted(vector<int> nums, int n){
    if(n == 0 || n == 1){
        return true;
    }

    return nums[n-1] >= nums[n-2] && isSorted(nums, n-1);
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int n = vec.size();

    if(isSorted(vec,n)) cout << "Yes" << "\n";
    else cout << "No" << "\n";
 
    return 0;
} 
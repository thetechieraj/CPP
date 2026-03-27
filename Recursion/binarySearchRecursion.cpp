#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid] == tar) return mid;

        else if(arr[mid] < tar){
            return binarySearch(arr, tar, mid + 1, end);
        }

        else{
            return binarySearch(arr, tar, st, mid - 1);
        }
    }
    return -1;
}

int search(vector<int> &arr, int tar){
    return binarySearch(arr, tar, 0, arr.size() - 1);
}

int main(){
    vector<int> nums = {1,3,4,6,7,9,14,16,18,19,20};
    int tar = 18;

    cout << "The index is : " << search(nums, tar) << "\n";

    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> arr, int target){
    int str = 0;
    int end = arr.size()-1;

    while(str <= end){
        int mid = str + ((end-str)/2);

        if(arr[mid] < target){
            str = mid+1;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,3,5,7,11,13,15,17,19,90};

    int target = 13;

    cout << binarySearch(arr,target) << "\n";

    return 0;
}
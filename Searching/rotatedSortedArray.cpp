#include<iostream>
#include<vector>

using namespace std;

int rotatedArray(vector<int> vec, int target){
    int st = 0;
    int end = vec.size()-1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(target == vec[mid]){
            return mid;
        }

        if(vec[st] <= vec[mid]){            // Left sorted
            if(vec[st] <= target && target <= vec[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{                               // Right sorted
            if(vec[mid] <= target && target <= vec[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {7,8,9,0,1,2,3,4,5,6};
    int target = 6;

    cout << rotatedArray(vec,target) << "\n";

    return 0;
}
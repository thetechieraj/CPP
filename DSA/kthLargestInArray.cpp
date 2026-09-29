#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> min_heap;

        for(int num : nums){
            min_heap.push(num);

            if(min_heap.size() > k){
                min_heap.pop();
            }
        }

        return min_heap.top();
}

int main(){
    vector<int> one = {5,9,7,1,3,8,2,6,4};
    int k = 3;

    cout << findKthLargest(one, k);

    return 0;
}
// Time Complexity is o(n)

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> max(vector<int>& nums, int k){
    int n = nums.size();
    vector<int> nge(n, -1);

    stack<int> st;

    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && nums[st.top()] <= nums[i]){
            st.pop();
        }

        if(!st.empty()) nge[i] = st.top();

        st.push(i);
    }

    vector<int> ans(n-k+1);
    int j;

    for(int i = 0; i < n-k+1; i++){
        if(j < i) j = i;

        while(nge[j] != -1 && nge[j] < i+k){
            j = nge[j];
        }

        ans[i] = nums[j];  // mark max in window
    }

    return ans;
}

int main(){
    vector<int> nums = {4,1,5,2,6,7,3};
    int k = 3;

    vector<int> ans = max(nums, k);

    for(int i : ans){
        cout << i << " ";
    }

    return 0;
}
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

int maxRectangleArea(vector<int>& heights){
    int n = heights.size();
    stack<int> st;

    // Next Smallest Element

    vector<int> nse(n, n);

    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && heights[st.top()] >= heights[i])
            st.pop();

        if(!st.empty()) nse[i] = st.top();

        st.push(i);
    }

    while(!st.empty())
        st.pop();

    // Previous Smallest Element

    vector<int> pse(n, -1);
    int maxArea = 0;

    for(int i = 0; i < n; i++){
        while(!st.empty() && heights[st.top()] >= heights[i])
            st.pop();

        if(!st.empty()) pse[i] = st.top();

        st.push(i);

        int height = heights[i];
        int width = nse[i] - pse[i] -1;
        int area = height * width;

        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main(){
    vector<int> nums = {5,2,4,8,7,5,3,1,7};

    cout << "The area is: " << maxRectangleArea(nums);

    return 0;
}
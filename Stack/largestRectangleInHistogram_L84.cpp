class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;

        // Next Smaller Element (index)
        vector<int> nsi(n, n);

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if(!st.empty()) {
                nsi[i] = st.top();
            }

            st.push(i);
        }

        while(!st.empty()) {
            st.pop();
        }

        // Previous Smaller Element (index)
        vector<int> psi(n, -1);

        for(int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if(!st.empty()) {
                psi[i] = st.top();
            }

            st.push(i);
        }

        // Calculate maximum area
        int maxArea = 0;

        for(int i = 0; i < n; i++) {
            int height = heights[i];
            int width = nsi[i] - psi[i] - 1;
            int area = height * width;

            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};

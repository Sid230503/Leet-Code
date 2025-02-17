    #include <bits/stdc++.h>
    using namespace std;

    class Solution {
    public:
        int largestRectangleArea(vector<int>& heights) {
            int n = heights.size();
            stack<int> st;
            vector<int> left(n), right(n);
            
            
            for (int i = 0; i < n; i++) {
                while (!st.empty() && heights[st.top()] >= heights[i])
                    st.pop();
                left[i] = st.empty() ? 0 : st.top() + 1;
                st.push(i);
            }
            
            
            while (!st.empty()) st.pop();

        
            for (int i = n - 1; i >= 0; i--) {
                while (!st.empty() && heights[st.top()] >= heights[i])
                    st.pop();
                right[i] = st.empty() ? n - 1 : st.top() - 1;
                st.push(i);
            }

            
            int maxArea = 0;
            for (int i = 0; i < n; i++) {
                int width = right[i] - left[i] + 1;
                maxArea = max(maxArea, heights[i] * width);
            }

            return maxArea;
        }
    };

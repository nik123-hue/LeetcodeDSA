class Solution {
public:
 int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        stack<int> st;
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n || arr[st.top()]>arr[i])){
                int height = arr[st.top()];
                st.pop();
                int width = st.empty()? i : i - st.top() - 1;
                ans = max(ans,height*width);
            }
             if(i<n)st.push(i);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0;
        vector<int> height(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(matrix[i][j]=='1') height[j]++;
               else
               height[j] = 0;
            }
             ans = max(ans,largestRectangleArea(height));
        }
        return ans;
    }
};
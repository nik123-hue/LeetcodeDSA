class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        // for(int i=0;i<n;i++){
        //     for(int j=1;j<n;j++){
        //         int idx = (i+j)%n;
        //         if(nums[idx] > nums[i]){
        //             ans[i] = nums[idx];
        //             break;
        //         }
        //     }
        // }
        // return ans;
        stack<int> st;
        for(int i=2*n-1;i>=0;i--){
            int idx = i%n; // handles circular behaviour of loop
            while(!st.empty() && st.top()<=nums[idx]){
                st.pop();
            }
            if(i<n && !st.empty()){
                ans[idx] = st.top();
            }
            st.push(nums[idx]);
        }
        return ans;
    }
};
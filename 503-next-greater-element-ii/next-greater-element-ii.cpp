class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                int idx = (i+j)%n;
                if(nums[idx] > nums[i]){
                    ans[i] = nums[idx];
                    break;
                }
            }
        }
        return ans;
    }
};
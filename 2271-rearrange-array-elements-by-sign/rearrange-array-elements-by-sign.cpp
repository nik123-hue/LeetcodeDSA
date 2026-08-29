class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pos = 0;
        int neg = 1;
        for(int i=0;i<n;i++){
            int x = nums[i];
            if(x>0){
               ans[pos] = x;
                pos += 2;
            }
            else {
                ans[neg] = x;
                neg += 2;
            }
        }
        return ans;
    }
};
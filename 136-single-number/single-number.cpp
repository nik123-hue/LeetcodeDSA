class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        int ans=0;
        for(int i= 0;i<len;i++){
            ans = ans ^ nums[i];
        }
        return ans;
        
    }
};
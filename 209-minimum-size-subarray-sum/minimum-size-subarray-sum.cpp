class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int Len;
        int minLen = INT_MAX;
        int i = 0;
        int j = 0;
        while(j<n){
            sum += nums[j];
            while(sum>=target){
                Len = j-i+1;
                minLen = min(minLen,Len);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        if(minLen==INT_MAX) return 0;
         return minLen;
        
    }
};
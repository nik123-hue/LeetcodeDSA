class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int len;
        int maxLen = INT_MIN;
        int flips = 0;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flips<k){
                    flips++;
                    j++;
                }
                else{
                    len = j-i;
                    maxLen=max(maxLen,len);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }


        }
          len = j-i;
          maxLen=max(maxLen,len);
             return maxLen;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n==0) return 0;
        int longest =1;
        int curr_cnt =0;
        int last_smaller = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1 == last_smaller){
                curr_cnt = curr_cnt+1;
                last_smaller = nums[i];
            }
            else if(nums[i] != last_smaller){
                curr_cnt = 1;
                last_smaller = nums[i];

            }
            longest = max(longest,curr_cnt);
        }
        return longest;
    }
};
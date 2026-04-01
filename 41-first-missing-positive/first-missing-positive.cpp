class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            if(nums[i]<=0) i++;
           else if(nums[i]<=0 || nums[i]>n || nums[nums[i]-1]==nums[i] || nums[i]==i+1) i++;
            else swap (nums[i],nums[nums[i]-1]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!= i+1) return i+1;
        }
        return n+1;
    }
};
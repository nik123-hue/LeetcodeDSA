class Solution {
public:
    int findMin(vector<int>& nums) {
       int n = nums.size();
       int i=0;
       int min = nums[0];
       while(i < n){
        if(nums[i] < min)
        min = nums[i];
        i++;
       }
       return min;
    }
};
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int num : nums){
            total += num;
        }
        int left_sum =0;
        for(int i=0;i<nums.size();i++){
            if(2*left_sum+nums[i]==total){
                return i;
            
        }
        left_sum += nums[i];

        
      }
       return -1;
    }
};
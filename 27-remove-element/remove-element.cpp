class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n==0) return 0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
            nums[count] = nums[i];
            count++;
        }
     }
        return count;
    }
};
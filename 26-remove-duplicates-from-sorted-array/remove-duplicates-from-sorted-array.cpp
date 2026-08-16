class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j=0 , k = 0 , i = 0;
        while(j < n){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                nums[k] = nums[i];
                k++;
                i = j;
            }

        
        }
        nums[k++] = nums[n-1];
        return k;
    }
};
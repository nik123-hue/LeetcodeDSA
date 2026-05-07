class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            elementSum += nums[i];
        
            int temp = nums[i];
        
        while(temp>0){
            digitSum += temp%10;
            temp /= 10; 
        }
        }
        return abs(elementSum-digitSum);
        
        
    }
};
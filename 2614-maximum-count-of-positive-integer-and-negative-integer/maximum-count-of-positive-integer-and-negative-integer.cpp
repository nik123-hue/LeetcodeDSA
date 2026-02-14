class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive_count=0;
        int negative_count=0;
        for(int num : nums){
            if(num>0){
            positive_count++;
            }
            else if(num<0){
                negative_count++;
            }
         
        }
        return max(positive_count,negative_count);
        
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = *min_element(nums.begin(),nums.end());
        long long sum = 0;
        for(int x:nums){
            sum += x;
        }
        return sum - (nums.size()*mn); // decrementing by 1 = incrementing by n-1 in each step
    }
};
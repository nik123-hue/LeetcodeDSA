class Solution {
public:
    bool possible(vector<int>& nums, int k, int maxSum) {
        int subarrays = 1;
        long long sum = 0;
        for (int num : nums) {
            if (sum + num <= maxSum) {
                sum += num;
            } 
            else {
                subarrays++;
                sum = num;
            }
        }
        return subarrays <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = 0;
        for (int num : nums)
            high += num;
        long long ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
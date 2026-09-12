class Solution {
public:
    int countSubarrays(vector<int>& nums, long long maxSum) {
        int subarrays = 1;
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] <= maxSum) {
                sum += nums[i];
            }
            else {
                subarrays++;
                sum = nums[i];
            }
        }
        return subarrays;
    }
    int splitArray(vector<int>& nums, int k) {

       int low = *max_element(nums.begin(), nums.end());
       int high = 0;
        for (int i = 0; i < nums.size(); i++) {
            high += nums[i];
        }
        while (low <= high) {
           int mid = low + (high - low) / 2;
            int subarrays = countSubarrays(nums, mid);
            if (subarrays <= k) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};
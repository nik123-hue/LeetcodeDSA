class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        int e = n / 2;
        if (n % 2 == 1)
            e = (n / 2) + 1;
        vector<int> even(e);
        vector<int> odd(n / 2);
        int j = 0, k = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                even[j++] = nums[i];
            }
            else {
                odd[k++] = nums[i];
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        j = 0;
        k = (n / 2) - 1;
        for (int i = 0; i < n; i += 2) {
            nums[i] = even[j++];
        }
        for (int i = 1; i < n; i += 2) {
            nums[i] = odd[k--];
        }
        return nums;
    }
};
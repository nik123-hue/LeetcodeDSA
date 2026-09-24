class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_product = nums[0];
        int min_product = nums[0];
        int ans = nums[0];
        
        for(int i=1;i<n;i++){
            int x = nums[i];
            int tempMax = max({x,x*max_product,x*min_product});
            int tempMin = min({x,x*max_product,x*min_product});
            max_product = tempMax;
            min_product = tempMin;

            ans = max(ans,max_product);
        }
        return ans;
    }
};
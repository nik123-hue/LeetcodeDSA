class Solution {
public:
   int SumByD(vector<int>& nums, int div) {
      int sum = 0;
      int n = nums.size();
      for(int i=0;i<n;i++){
        sum = sum + ceil((double)(nums[i])/(double)(div));
      }
      return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if(n>threshold) return -1;
      int lo = 1;
      int hi = *max_element(nums.begin(),nums.end());
      while(lo<=hi){
        int mid = (lo+hi)/2;
        if(SumByD(nums,mid)<=threshold){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
      }
      return lo;
    }
};
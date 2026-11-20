class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long even = 1, odd = 0;
        long long sum = 0, ans = 0;
        int mod = 1e9 + 7;
        for(int x : arr){
            sum += x;
           if(sum %2 ==0){
            ans += odd;
            even++;
        } 
        else {
            ans += even;
            odd++;
        }
        ans = ans%mod;
      }
        return ans;
    }
};
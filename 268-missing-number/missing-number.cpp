class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n=v.size();
        int sum_v=0;
        int total_sum=n*(n+1)/2;
        for(int ele: v)
            sum_v += ele;
        return total_sum-sum_v;

        
    }
};
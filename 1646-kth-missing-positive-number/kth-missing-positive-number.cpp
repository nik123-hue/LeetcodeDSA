class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int missing = arr[mid]-mid-1;
            if(missing<k) lo = mid+1;
            else hi = mid-1;
        }
        return lo+k;
        
    }
};
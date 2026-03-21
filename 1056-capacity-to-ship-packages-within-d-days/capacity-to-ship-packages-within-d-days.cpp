class Solution {
public:
bool check(int mid,vector<int>& weights,int days){
    int n= weights.size();
    int m = mid;
    int count = 1;
    for(int i =0; i<n;i++){
        if(m>=weights[i]){
            m -= weights[i];
        }
        else {
            count++;
            m = mid;
            m -= weights[i];
        }
    }
    if(count>days) return false;
    else return true;

}

    int shipWithinDays(vector<int>& weights, int days) {
        int n= weights.size();
        int max = INT_MIN;
        int sum = 0;
        for(int i=0;i<n;i++){
            if(max<weights[i]) max= weights[i];
            sum += weights[i];

        }
        int lo = max;
        int hi = sum;
        int minCapacity = sum;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(check(mid,weights,days)){
                minCapacity = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        return minCapacity;

        
    }
};
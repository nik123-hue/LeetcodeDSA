class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());
                int suf[n];
        suf[n-1] = satisfaction[n-1];
        for(int i = n-2;i>=0;i--){
            suf[i] = suf[i+1] + satisfaction[i];

        }
        int idx =-1;
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
                idx = i;
                break;
            }
        }
        if(idx==-1) return 0;
        int x = 1;
        int maxSum = 0;
        for(int i=idx;i<n;i++){
            maxSum += (satisfaction[i]*x);
            x++;
        }
         return maxSum;
        
    }
};
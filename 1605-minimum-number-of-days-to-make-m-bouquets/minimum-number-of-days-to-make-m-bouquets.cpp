class Solution {
public:
bool possible(vector<int>& bloomDay,int day,int m,int k){
    int n = bloomDay.size();
    int cnt = 0;
    int noOfBouquet = 0;
    for(int i=0;i<n;i++){
        if(bloomDay[i]<=day){
            cnt++;
        }
        else{
            noOfBouquet += cnt/k;
            cnt = 0;
        }
    }
    noOfBouquet += cnt/k;
    if( noOfBouquet >= m){
        return true;
    }
    return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
         if((long long)m * k > n){ 
        return -1; 
    } 
    int mini = bloomDay[0]; 
    int maxi = bloomDay[0]; 

    for(int i = 0; i < n; i++){ 
        mini = min(mini, bloomDay[i]); 
        maxi = max(maxi, bloomDay[i]); 
    } 
    int low = mini;
    int high = maxi;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(possible(bloomDay, mid, m, k)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
    }
};
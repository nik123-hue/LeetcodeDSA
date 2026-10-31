class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int mod = 1e9 + 7;
        vector<int> dp(n,0);
        dp[0] = 1;
        for(int i=0;i<m;i++){
            int left = 0;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    swap(left,dp[j]);
                }
                else{
                    int sum = (left+dp[j]) % mod;
                    left = sum;
                    dp[j] = sum;

                }
            }
        }
        return dp[n-1];
    }
};
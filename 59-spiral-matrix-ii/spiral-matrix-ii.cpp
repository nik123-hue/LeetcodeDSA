class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int> (n));
        int minr = 0;
        int maxr = n-1;
        int minc = 0;
        int maxc = n-1;
        int count = 1;
        while(minr<=maxr && minc <=maxc){
            // right
            for(int j = minc;j<=maxc;j++){
                arr[minr][j] = count++;
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            // down
            for(int i=minr;i<=maxr;i++){
                arr[i][maxc] = count++;

            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
              // left
            for(int j=maxc;j>=minc;j--){
                arr[maxr][j] = count++;
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            // top
            for(int i = maxr;i>=minr;i--){
                arr[i][minc] = count++;
            }
            minc++;
            if(minr>maxr || minc>maxc) break;
        }
        return arr;
        
    }
};
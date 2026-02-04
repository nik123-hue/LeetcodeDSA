class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int left=0;
        int right=mat[0].size()-1;
        int top=0;
        int bottom=mat.size()-1;
        int direction=0;
        while(left<=right && top<=bottom){
            if(direction==0){
                for(int col=left;col<=right;col++){
                    ans.push_back (mat[top][col]);
                }
                    top++;
                
            }
                else if(direction==1){
                    for(int row=top;row<=bottom;row++){
                        ans.push_back(mat[row][right]);
                    }
                        right--;
                    
                }
                    else if(direction==2){
                        for(int col=right;col>=left;col--){
                            ans.push_back(mat[bottom][col]);
                        }
                            bottom--;
                        
                    }
                        else{
                            for(int row=bottom;row>=top;row--){
                                ans.push_back(mat[row][left]);
                            }
                                left++;
                            

                        }
                        direction=(direction+1)%4;
            
        }
    
    return ans;
    }
};

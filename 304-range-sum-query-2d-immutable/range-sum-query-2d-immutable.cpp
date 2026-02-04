class NumMatrix {
public:
vector <vector<int>>mat;
    NumMatrix(vector<vector<int>>& matrix) {
        mat=matrix;
        for(int i=0;i<mat.size();i++){
            for(int j=1;j<mat[0].size();j++){
                mat[i][j]+=mat[i][j-1];
            }
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                mat[i][j]+=mat[i-1][j];
            }
        }

        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum =0;
        int top_sum=0,left_sum=0,topleft_sum=0;
        if(row1!=0){
            top_sum=mat[row1-1][col2];
        }
        if(col1!=0){
            left_sum=mat[row2][col1-1];
        }
        if(row1!=0 && col1!=0){
            topleft_sum=mat[row1-1][col1-1];
        }
        sum=mat[row2][col2]-top_sum-left_sum+topleft_sum;
        
        return sum;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
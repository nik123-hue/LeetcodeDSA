class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& v) {
        int maxOnes=0;
        int row=0;
      for(int i=0;i<v.size();i++){
        int count = 0;
        for(int j=0;j<v[i].size();j++){
           if(v[i][j]==1){
           count++;
           }
        }
        if(count>maxOnes){
            maxOnes = count;
            row = i;
        }
      }
      return{row,maxOnes};
    }  
};
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& v) {
        int maxOnes=0;
        int maxOnesRow=0;
        int columns=v[0].size();
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]==1){
                    int NumberOfOnes=count(v[i].begin(),v[i].end(),1);
                    if(NumberOfOnes>maxOnes){
                        maxOnes=NumberOfOnes;
                        maxOnesRow=i;
                    }
                    break;
                }
                
            }
        }

        
          return {maxOnesRow,maxOnes};

    } 
    
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int count=0;
        int max_count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                count++;
                if(count>max_count){
                max_count=count;
                }
            }
            else{
                count=0;
            }
        }
        return max_count;
        
    }
     
};
class Solution {
public:
    void validCombination(vector<vector<int>> &ans,vector<int> &v,int idx,int k,int n){
        if(k==0){
        if(n==0)
        ans.push_back(v);
        return;
        }
        if(n<0){
            return;
        }
        for(int i=idx;i<=9;i++){
           v.push_back(i);
           validCombination(ans,v,i+1,k-1,n-i);
           v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> v;
        validCombination(ans,v,1,k,n);
        return ans;
    }
};
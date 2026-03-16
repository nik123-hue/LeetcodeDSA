class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n=v.size();
        int i=0; // i will traverse at zeroes
        int j=0; // traverse at non - zeroes
        while(i<n && j<n){
            if(v[i]==0 && v[j]!=0){
                if(j>i) swap(v[i],v[j]);
                else j++;

            } 
            else if(v[i]!=0) i++;
            else if(v[j]==0) j++;
        }
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n= v.size();
        for(int i=n-1;i>=0;i--){
            int j=0;
            bool flag=false;
            while(j!=i){
                if(v[j]==0 && v[j+1]!=0){
                    swap(v[j],v[j+1]);
                    flag = true;
                }
                j++;
            }
            if(!flag) break;
        }
        return;
    }
};

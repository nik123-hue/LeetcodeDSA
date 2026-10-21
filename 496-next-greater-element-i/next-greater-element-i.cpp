class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int nge = -1;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    // check for next greater element in right side of j
                    for(int k=j+1;k<m;k++){ 
                        if(nums2[k]>nums2[j]){
                            nge = nums2[k];
                            break;
                        }
                    }
                    break;
                }
            }
            ans.push_back(nge);
        }
        return ans;
    }
};
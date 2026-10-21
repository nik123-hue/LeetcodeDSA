class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        stack<int> st;
        unordered_map<int,int> mp;
        vector<int> ans;
        // for(int i=0;i<n;i++){
        //     int nge = -1;
        //     for(int j=0;j<m;j++){
        //         if(nums1[i]==nums2[j]){
        //             // check for next greater element in right side of j
        //             for(int k=j+1;k<m;k++){ 
        //                 if(nums2[k]>nums2[j]){
        //                     nge = nums2[k];
        //                     break;
        //                 }
        //             }
        //             break;
        //         }
        //     }
        //     ans.push_back(nge);
        // }
        // return ans;
        for(int i=0;i<m;i++){
            while(!st.empty() && st.top()<nums2[i]){
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            mp[st.top()] = -1;
            st.pop();
        }
        for(int i=0;i<n;i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};
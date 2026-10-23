class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long mod = 1e9+7;
        stack<int> st;
        vector<int> left(n),right(n);
        // previous smaller element
        for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
           left[i] = st.empty() ? -1: st.top();
           st.push(i);
      }
         while(!st.empty()) st.pop();

         // Next Smaller Element
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            right[i] = st.empty() ? n:st.top();
            st.push(i);
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            long long count = 1LL * (i-left[i]) * (right[i]-i);
            ans = (ans+(1LL*arr[i]*count)%mod)%mod;
        }
        return ans;
    }
};
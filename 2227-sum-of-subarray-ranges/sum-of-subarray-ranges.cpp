class Solution {
public:
    long long sumMin(vector<int>& arr) {
         int n = arr.size();
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
        long long sum = 0;
        for(int i=0;i<n;i++){
            long long count = 1LL * (i-left[i]) * (right[i]-i);
            sum += 1LL*arr[i]*count;
        }
        return sum;
    }
      long long sumMax(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> left(n), right(n);

        // Previous Greater Element
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] < arr[i])
                st.pop();

            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();

        // Next Greater Element
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] <= arr[i])
                st.pop();

            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        long long sum = 0;

        for(int i = 0; i < n; i++) {
            long long count = 1LL * (i - left[i]) * (right[i] - i);
            sum += 1LL * arr[i] * count;
        }
        return sum;
    }
    long long subArrayRanges(vector<int>& arr) {
        return sumMax(arr) - sumMin(arr);
    }
};
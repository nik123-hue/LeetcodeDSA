class StockSpanner {
    stack<pair<int,int>> st;
    int idx = -1;
public:
    StockSpanner() {
    }
    
    int next(int price) {
       int ans = 0;
       idx = idx+1;
       while(!st.empty() && st.top().first<=price){
        st.pop();
       }
        ans = idx - (st.empty()?-1:st.top().second);
        st.push({price,idx});
       return ans;
    }
};
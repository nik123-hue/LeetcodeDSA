class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        string st = "";
        for(int i=0;i<n;i++){
           while(!st.empty() && k>0 && (st.back()-'0') > (num[i]-'0')){
            st.pop_back();
            k--;
           }
           st.push_back(num[i]);
        }
           while(k>0 && !st.empty()){
             st.pop_back();
           k--;
           }
           string res = "";
           while(!st.empty()){
            res += st.back();
              st.pop_back();
           }
           reverse(res.begin(),res.end());
           int i=0;
           while(i< res.size() && res[i]=='0'){
            i++;
           }
           res = res.substr(i);
           if(res.empty()) return "0";
           return res;
    }
};
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int balance = 0;
        for(char ch:s){
            if(ch=='('){
                if(balance>0)
                ans += ch;
                balance++;
            }
            else{
                balance--;
                if(balance > 0)
                ans += ch;
            }
        }
        return ans;
    }
};
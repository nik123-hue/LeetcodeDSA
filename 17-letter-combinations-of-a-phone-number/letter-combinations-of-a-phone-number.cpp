class Solution {
public:
 vector<string> ans;
 string mapping[10] = {
    "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
 };
  void solve(string digits,int idx,string curr){
    if(idx == digits.size()){
        ans.push_back(curr);
        return;
    }
    string letters = mapping[digits[idx]-'0'];
    for(char ch: letters){
        curr.push_back(ch);
        solve(digits,idx+1,curr);
        curr.pop_back();
    }
  }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        solve(digits,0,"");
        return ans;
    }
};
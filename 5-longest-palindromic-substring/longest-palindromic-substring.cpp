class Solution {
public:
int expand(string &s,int l, int r){
    while(l>=0 && r < s.length() && s[l]==s[r]){
        l--;
        r++;
    }
    return r-l-1; // length of palindrome
}
    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 1;
        for(int i=0;i<s.length();i++){
            int len1 = expand(s,i,i);
            int len2 = expand(s,i,i+1);
            int len = max(len1,len2);
            if(len>maxLen){
                maxLen = len;
                start = i-(len-1)/2; // starting index of longest palindrome
            }
        }
        return s.substr(start,maxLen);
    }
};
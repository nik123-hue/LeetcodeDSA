class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        for(char ch:s){
            freq[ch]++;
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]]==1)
            return i;
        }
         return -1;
    }
};
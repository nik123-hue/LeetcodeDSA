class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.length();
        unordered_map<char,int> freq;
        for(char ch: s){
            freq[ch]++;
            for(int i=0;i<n;i++){
            if(freq[ch]==2)
            return ch;
        }
        }
        return ' ';
    }
};
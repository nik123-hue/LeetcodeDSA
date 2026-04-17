class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for(const string s : sentences){
            int count = 1;
            for(char c : s){
                if(c ==' ') count++;
            }
              maxWords = max(maxWords,count);
        }
        return maxWords;
        
    }
};
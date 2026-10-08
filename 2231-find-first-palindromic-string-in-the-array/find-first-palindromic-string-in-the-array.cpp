class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string word:words){
            int i = 0;
            int j = word.length()-1;
            while(i<j){
            if(word[i] != word[j])
            break;
            i++;
            j--;
         }
             if(i>=j)
             return word;
        }
         return "";
    }
};
class Solution {
public:
    string convert(string s, int numrows) {
        if(numrows<=1) return s;
        vector<string>v(numrows,"");
        int j=0;int dir=-1;
        for(int i=0;i<s.length();i++){
            if(j==numrows-1 || j==0)
            dir *=-1;
            v[j]+=s[i];
            if(dir==1) j++;
            else
            j--;
        }
        string res;
        for(auto &it:v) res+=it;
        return res;
    }
};
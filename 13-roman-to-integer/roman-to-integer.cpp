class Solution {
public:
int value(char ch){
    if(ch=='I') return 1;
    if(ch=='V') return 5;
    if(ch=='X') return 10;
    if(ch=='L') return 50;
    if(ch=='C') return 100;
    if(ch=='D') return 500;
    if(ch=='M') return 1000;

    return 0;
}
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;
        for(int i=0;i<n;i++){
          int current = value(s[i]);
          if(current < value(s[i+1])){
            ans -= current;
          }
          else{
            ans += current;
          }
        }
        return ans;
    }
};
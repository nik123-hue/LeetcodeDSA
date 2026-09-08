class Solution {
public:
    int countCommas(int n) {
        int total = 0;
        int a = n-999;
        if(a>0) total += a;
        return total;
    }
};
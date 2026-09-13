class Solution {
public:
    int maximumGap(string skill, string station) {
        int n = skill.length() , m = station.length();

        vector<int> left(n);
        vector<int> right(n);

        int pos = 0;
        for(int i = 0; i < n; i++){
            while(station[pos] != skill[i]) pos++;

            left[i] = pos;
            pos++;
        }
        pos = m-1;
        for(int i = n-1; i >=  0; i--){
            while(station[pos] != skill[i]) pos--;
            right[i] = pos;
            pos--;
        }
        int gap = 0;
        for(int i  = 1; i < n; i++){
            gap = max(gap , right[i] - left[i-1]);
        }
        return gap;
    }
};
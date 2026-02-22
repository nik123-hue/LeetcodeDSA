class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int pos = 0;
        for (int i=0; i<v.size(); i++) {
            if (v[i] != 0) {
                v[pos++] = v[i];
            }
        }
        while (pos < v.size()) {
            v[pos++] = 0;
        }
    }
};

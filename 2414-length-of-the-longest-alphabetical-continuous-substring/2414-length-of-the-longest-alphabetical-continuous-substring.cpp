class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 1;
        int maxc = 1;
        for (int i = 1; i < s.length(); i++) {
            if (((int)s[i]) == ((int)s[i - 1]) + 1) {
                count++;
            } else {
                count = 1;
            }
            maxc = max(maxc, count);
        }
        return maxc;
    }
};
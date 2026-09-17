class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.length();
        int left = 0;
        int found;
        for (int i = left; i < n; i++) {
            if (s[i] == s[n - i - 1]) {
                found = i;
                break;
            } else {
                found = -1;
            }
        }
        return found;
    }
};
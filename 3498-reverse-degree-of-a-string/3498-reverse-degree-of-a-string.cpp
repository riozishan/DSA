class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            int revpos = 27 - (s[i] - 'a' + 1);
            sum = sum + (revpos * (i + 1));
        }
        return sum;
    }
};
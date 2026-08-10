class Solution {
public:
    string finalString(string s) {
        string f;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'i') {
                reverse(f.begin(), f.end());
            } else {
                f += s[i];
            }
        }
        return f;
    }
};
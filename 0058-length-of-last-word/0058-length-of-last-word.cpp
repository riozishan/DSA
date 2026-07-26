class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = (s.length()-1); i >= 0; i--) {
            if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
                count++;
            } else if(s[i] == ' ') {
                if (count != 0) {
                    break;
                } else {
                    continue;
                }
            }
        }
        return count;
    }
};
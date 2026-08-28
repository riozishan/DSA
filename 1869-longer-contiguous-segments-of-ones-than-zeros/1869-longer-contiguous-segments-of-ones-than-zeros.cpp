class Solution {
public:
    bool checkZeroOnes(string s) {
        int ocount = 1;
        int zcount = 1;
        int maxocount = 0;
        int maxzcount = 0;
        if (s.length() == 1) {
            if (s[0] == '1') {
                maxocount++;
            }
        }
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                if (s[i] == '1') {
                    ocount++;
                } else {
                    zcount++;
                }
            } else {
                if (s[i] == '1') {
                    ocount = 1;
                } else {
                    zcount = 1;
                }
            }
            maxocount = max(maxocount, ocount);
            maxzcount = max(maxzcount, zcount);
        }
        return (maxocount > maxzcount);
    }
};
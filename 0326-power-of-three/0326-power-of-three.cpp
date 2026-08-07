class Solution {
public:
    bool isPowerOfThree(int n) {
        long pro = 1;
        while (pro <= n) {
            if (pro == n) {
                break;
            }
            pro = pro * 3;
        }
        if (pro == n) {
            return 1;
        } else {
            return 0;
        }
    }
};
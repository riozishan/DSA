class Solution {
public:
    bool isPowerOfFour(int n) {
        long pro = 1;
        while (pro < n) {
            pro *= 4;
        }
        return pro == n;
    }
};
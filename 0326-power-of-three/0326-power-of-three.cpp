class Solution {
public:
    bool isPowerOfThree(int n) {
        long pro = 1;
        while (pro < n) {
            pro *= 3;
        }
        return pro == n;
    }
};
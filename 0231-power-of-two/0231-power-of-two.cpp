class Solution {
public:
    bool isPowerOfTwo(int n) {
        long pro = 1;
        while (pro < n) {
            pro *= 2;
        }
        return pro == n;
    }
};
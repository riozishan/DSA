class Solution {
public:
    int smallestEvenMultiple(int n) {
        int m = n;
        for (n; n < (2 * n); n++) {
            if ((n % m == 0) && (n % 2 == 0)) {
                m = n;
                break;
            }
        }
        return m;
    }
};
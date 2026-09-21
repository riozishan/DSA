class Solution {
public:
    int mirrorDistance(int n) {
        int num = n;
        int ld;
        int rev = 0;
        while (n != 0) {
            ld = n % 10;
            n = n / 10;
            rev = rev * 10 + ld;
        }
        int mirr = num - rev;
        if (mirr < 0) {
            mirr = mirr * -1;
        }
        return mirr;
    }
};
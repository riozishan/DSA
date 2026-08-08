class Solution {
public:
    int alternateDigitSum(int n) {
        int ld;
        int sum = 0;
        int sub = 0;
        int count = 0;
        int rev = 0;
        while (n != 0) {
            ld = n % 10;
            n = n / 10;
            rev = rev * 10 + ld;
        }
        while (rev != 0) {
            ld = rev % 10;
            count++;
            rev = rev / 10;
            if (count % 2 == 0) {
                sub += ld;
            } else {
                sum += ld;
            }
        }
        return (sum - sub);
    }
};
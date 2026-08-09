class Solution {
public:
    int countDigits(int num) {
        int ld;
        int count = 0;
        int org = num;
        while (num != 0) {
            ld = num % 10;
            num = num / 10;
            if (org % ld == 0) {
                count++;
            } else {
                continue;
            }
        }
        return count;
    }
};
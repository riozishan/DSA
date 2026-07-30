class Solution {
public:
    bool isSameAfterReversals(int num) {
        int ld, rev = 0, n2;
        int n1 = num;
        while (num != 0) {

            ld = num % 10;
            num = num / 10;
            rev = (rev * 10) + ld;
            
        }
        while (rev != 0) {
            ld = rev % 10;
            rev = rev / 10;
            num = (num * 10) + ld;
        }
        if (num == n1) {
            return 1;
        }
        else{
            return 0;
        }
    }
};
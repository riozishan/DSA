class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1, ld, sum =0, subt;
        int m = n;
        while(n>0){
            ld = n % 10;
            n = n /10;
            pro = pro * ld;
        }
        while(m>0){
            ld = m % 10;
            m = m /10;
            sum = sum + ld;
        }
        subt = pro - sum;
        return subt;
    }
};
class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        int dsum = 0;
        int dpro = 1;
        int ld;
        while(n!=0){
            ld = n%10;
            n = n/10;
            dsum = dsum + ld;
            dpro = dpro *ld;
        }
        return (num%(dsum+dpro)==0);
    }
};
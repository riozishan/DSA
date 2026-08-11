class Solution {
public:
    int mySqrt(int x) {
        long long ans;
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        for (long long i = 0; i < x; i++) {
            if (i * i == x) {
                ans = i;
                break;
            } else if (i * i > x) {
                ans = i - 1;
                break;
            } else {
                continue;
            }
        }
        return ans;
    }
};
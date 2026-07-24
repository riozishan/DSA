class Solution {
public:
    int digitFrequencyScore(int n) {
        int count = 0, ld;
        while(n!=0){
            ld = n % 10;
            n = n/10;
            count = count + ld;
        }
        return count;
    }
};
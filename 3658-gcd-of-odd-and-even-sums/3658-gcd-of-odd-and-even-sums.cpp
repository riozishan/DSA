class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0, sumeven = 0, gcd, count = n;
        for(int i = 1; i<=count; i+=2){
            sumodd = sumodd + i;
            count++;
        }
        for(int i = 2; i<=count; i+=2){
            sumeven = sumeven + i;
        }
        for(int i = min(sumeven, sumodd); i>=1; i--){
            if((sumeven % i == 0) && (sumodd % i == 0)){
                gcd = i;
                break;
            }
        }
        return gcd;
    }
};
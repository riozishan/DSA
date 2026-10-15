class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for(int i = 2; i<=n; i++){
            if((7%i==0)||(5%i==0)||(3%i==0)||(i%7==0)||(i%5==0)||(i%3==0)){
                sum+=i;
            }
        }
        return sum;
    }
};
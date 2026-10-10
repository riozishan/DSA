class Solution {
public:
    bool isHappy(int n) {
        int ld;
        unordered_set<int>seen;
        do{
            int sum = 0;
            if(seen.count(n)){
                break;
            }
            else{
                seen.insert(n);
            }
            while(n!=0){
                ld = n % 10;
                n = n /10;
                sum = sum + (ld*ld);
            }
            n = sum;
        }while(n!=1);
        if(n==1){
            return 1;
        }
        else{
            return 0;
        }
        
    }
};
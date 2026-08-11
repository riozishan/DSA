class Solution {
public:
    bool isPerfectSquare(int num) {
        int flag = 0;
        if(num==1){
            flag = 1;
        }
        for(long i = 0; i< num; i++){
            if(i*i == num){
                flag = 1;
                break;
            }
        }
        return flag;
    }
};
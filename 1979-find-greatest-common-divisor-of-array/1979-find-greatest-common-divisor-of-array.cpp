class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = nums[0], mini = nums[0], gcd;
        for (int i = 1; i < nums.size(); i++) {
            maxi = max(nums[i], maxi);
            mini = min(nums[i], mini);
        }
        for(int i = mini; i>0; i--){
            if((maxi % i==0)&&(mini % i ==0)){
                gcd = i;
                break;
            }
        }
        return gcd;
    }
};
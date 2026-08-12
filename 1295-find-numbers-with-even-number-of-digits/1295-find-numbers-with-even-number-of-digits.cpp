class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n;
        int counte = 0;
        for(int i = 0; i< nums.size(); i++){
            n = nums[i];
            long count = 0;
            while(n>0){
                n = n/10;
                count ++;
            }
            if(count%2==0){
                counte++;
            }
        }
        return counte;
    }
};
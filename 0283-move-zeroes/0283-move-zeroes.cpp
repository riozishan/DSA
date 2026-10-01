class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        for(int i = 0; i<s;i++){
            for(int j = 0; j<s-i-1; j++){
                if(nums[j]==0){
                    swap(nums[j], nums[j+1]);
                }
            }
            
        }
    }
};
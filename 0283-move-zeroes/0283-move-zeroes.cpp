class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        int j;
        for(int i = 0; i<s;i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }
        for(int i = j+1; i<s;i++){
            if(nums[i]!=0){
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};
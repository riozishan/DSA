class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ele;
        if(nums.size()<=2){
            ele = -1;
        }
        else{
            ele = nums[1];
        }
        return ele;
    }
};
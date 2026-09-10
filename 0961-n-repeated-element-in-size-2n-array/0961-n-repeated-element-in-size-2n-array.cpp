class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ele;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                ele = nums[i];
                break;
            }
        }
        return ele;
    }
};
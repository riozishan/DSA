class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max;
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        if (nums.size() >= 3) {
            max = nums[nums.size() - 3];
        } else {
            max = nums[nums.size() - 1];
        }
        return max;
    }
};
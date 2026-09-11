class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s = nums.size();
        for (int i = 0; i < s; i++) {
            nums[i]--;
        }
        sort(nums.begin(), nums.end());
        int pro = nums[s - 1] * nums[s - 2];
        return pro;
    }
};
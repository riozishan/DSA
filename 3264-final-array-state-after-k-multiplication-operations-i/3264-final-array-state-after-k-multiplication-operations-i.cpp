class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 0; i<k; i++){
            int miniv = *min_element(nums.begin(), nums.end());
            int pos = find(nums.begin(), nums.end(), miniv) - nums.begin();
            nums[pos] = nums[pos] * multiplier;
        }
        return nums;

    }
};
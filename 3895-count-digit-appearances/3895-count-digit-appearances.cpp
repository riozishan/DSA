class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        vector<int> arr2;
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] != 0) {
                int ld;
                ld = nums[i] % 10;
                nums[i] = nums[i] / 10;
                if (ld == digit) {
                    arr2.push_back(ld);
                }
            }
        }
        return arr2.size();
    }
};
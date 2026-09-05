class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i] * nums[i];
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        unordered_set<int> present(nums.begin(), nums.end());
        for (int i = 1; i <= n; i++) {
            if (!present.count(i)) {
                arr.push_back(i);
            }
        }
        return arr;
    }
};
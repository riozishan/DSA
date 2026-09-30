class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        unordered_set<int> present(nums.begin(), nums.end());
        for (int i = 1; i <= n; i++) {
            if (!present.count(i)) {
                st.insert(i);
            }
        }
        return vector<int>(st.begin(), st.end());
    }
};
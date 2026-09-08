class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int l;
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back(nums[i]);
        }
        sort(nums.begin(), nums.end());
        l = nums[nums.size() - 1];
        int found = 0;
        int ele;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (l >= 2 * nums[i]) {
                found = 1;
            } else {
                found = 0;
                break;
            }
        }
        int pos;
        for (int i = 0; i < nums.size(); i++) {
            if (arr[i] == l) {
                pos = i;
                break;
            }
        }
        if (found == 1) {
            return pos;
        } else {
            return -1;
        }
    }
};
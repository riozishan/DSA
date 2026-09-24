class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int found;
        for (int i = 0; i < nums.size(); i++) {
            int dsum = 0;
            int ld;
            while (nums[i] != 0) {
                ld = nums[i] % 10;
                nums[i] = nums[i] / 10;
                dsum +=ld;
            }
            if (dsum == i) {
                found = i;
                break;
            } else {
                found = -1;
            }
        }
        return found;
    }
};
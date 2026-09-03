class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int oddcount = 0, evencount = 0;
        for (int x : nums1) {
            if (x % 2 == 0) {
                evencount++;
            } else {
                oddcount++;
            }
        }
        int allOdd = 1;
        for (int x : nums1) {
            if (x % 2 == 0) {
                if (oddcount == 0) {
                    allOdd = 0;
                    break;
                }
            }
        }
        int allEven = 1;
        for (int x : nums1) {
            if (x % 2 == 1) {
                if (oddcount < 2 && evencount == 0) {
                    allEven = 1;
                    break;
                }
                if (evencount == 0 && oddcount == 1) {
                    allEven = 0;
                    break;
                }
            }
        }
        return allOdd || allEven;
    }
};
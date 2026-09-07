class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int ld;
        vector <int> arr;
        for(int i = 0; i<nums.size(); i++){
            arr.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            int rev = 0;
            while (nums[i] != 0) {
                ld = nums[i] % 10;
                nums[i] = nums[i] / 10;
                rev = (rev * 10) + ld ;
            }
            arr.push_back(rev);    
        }
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        return arr.size();
    }
};
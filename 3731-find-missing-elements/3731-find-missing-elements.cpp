class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k = 0;
        vector<int> arr;
        for(int i = nums[0]; i<nums[nums.size()-1]; i++){
            if(find(nums.begin(), nums.end(), i) != nums.end()){
                continue;
            }
            else{
                arr.push_back(i);
            }
        }
        return arr;
    }
};
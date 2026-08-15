class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr(nums.size(), 0);
        for(int i = 0; i< nums.size(); i++){
            for(int j= 0; j< nums.size(); j++){
                if(i==j){
                    continue;
                }
                if(nums[j]<nums[i]){
                    arr[i]++;
                }
            }
        }
        return arr;
    }
};
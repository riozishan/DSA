class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxid = -1;
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j<nums.size(); j++){
                if(i==j){
                    continue;
                }
                if((nums[j]>nums[i])&&(i<j)){
                    maxid = max(maxid, nums[j]-nums[i]);
                }
            }
        }
        return maxid;
    }
};
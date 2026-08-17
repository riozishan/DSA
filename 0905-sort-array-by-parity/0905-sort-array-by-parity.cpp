class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> arr(nums.size(), 0);
        int j = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i]%2==0){
                arr[j] = nums[i];
                j++;
            }
        }
        for(int i = 0; i< nums.size(); i++){
            if(nums[i]%2!=0){
                arr[j] = nums[i];
                j++;
            }
        }
        return arr;
    }
};
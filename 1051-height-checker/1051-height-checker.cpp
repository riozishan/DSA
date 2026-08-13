class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int count = 0;
        vector<int> arr = heights;
        for(int i = 0; i<n-1; i++){
            for(int j = 0; j< n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
        }
        for(int i=0; i<n; i++){
            if(heights[i]!=arr[i]){
                count++;
            }
            else{
                continue;
            }
        }
        return count;

    }
};
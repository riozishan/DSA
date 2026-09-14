class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int minad = arr[1] - arr[0];
        for (int i = 1; i < arr.size(); i++) {
            int d = arr[i] - arr[i - 1];
            minad = min(minad, d);
        }
        vector<vector<int>> result;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == minad) {
                result.push_back({arr[i - 1], arr[i]});
            }
        }
        return result;
    }
};
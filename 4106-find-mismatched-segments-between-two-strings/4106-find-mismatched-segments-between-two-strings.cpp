class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> arr;
        for(int i = 0; i<s1.length(); i++){
            if(s1[i]!=s2[i]){
                int j = i;
                while(s1[j]!=s2[j]){
                    j++;
                }
                arr.push_back({s1.substr(i, j-i),s2.substr(i,j-i)});
                i = j;
            }
        }
        return arr;
    }
};
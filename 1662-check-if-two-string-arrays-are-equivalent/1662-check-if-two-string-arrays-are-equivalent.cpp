class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string st1;
        string st2;
        for(int i = 0; i<word1.size(); i++){
            for(int j = 0; j<word1[i].length(); j++){
                st1+= word1[i][j];
            }
        }
        for(int i = 0; i<word2.size(); i++){
            for(int j = 0; j<word2[i].length(); j++){
                st2+= word2[i][j];
            }
        }
        return (st1 == st2);
    }
};
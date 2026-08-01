class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            int left = 0;
            int right = words[i].length() - 1;
            int pal = 1;
            while (left < right) {
                if (words[i][left] == words[i][right]) {
                    left++;
                    right--;
                } else {
                    pal = 0;
                    break;
                }
            }
            if (pal == 1) {
                return words[i];
            }
        }
        return "";
        
    }
};
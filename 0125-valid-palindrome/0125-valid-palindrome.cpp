class Solution {
public:
    bool isPalindrome(string s) {
        string org;
        for (char c : s) {
            if (isalnum(c)) {
                org += tolower(c);
            }
        }
        int left = 0, right = org.length() - 1;
        while (left < right) {
            if (org[left] != org[right]) {return false;}
            left++;
            right--;
        }

        return true;
    }
};
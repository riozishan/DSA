class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos, nfound = 0;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                pos = i;
                nfound = 0;
                break;
            } else {
                nfound = 1;
                continue;
            }
        }
        int left = 0;
        int right = pos;
        if (nfound == 1) {
            return word;
        } else {
            while (left < right) {
                swap(word[left], word[right]);
                left++;
                right--;
            }
            return word;
        }
    }
};
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        set<char> st;
        for(int i = 0 ; i<word.length(); i++){
            st.insert(word[i]);
        }
        for(auto it : st){
            int numw = (int)it;
            if (find(word.begin(), word.end(), numw - 32) != word.end()){
                count++;
            }
        }
        return count;
    }
};
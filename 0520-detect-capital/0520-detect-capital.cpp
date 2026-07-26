class Solution {
public:
    bool detectCapitalUse(string word) {
        int capcount = 0, onlyfirst = 1;
        for(int i = 0; i < word.length(); i++){
            if(word[i] >= 65 && word[i] <= 90){
                capcount++;
            }
        }
        for(int i = 1; i < word.length(); i++){
            if(word[i] >= 65 && word[i] <= 90){
                onlyfirst = 0;
            }
        }
        
        if(capcount == word.length()){
            return 1;
        }
        else if(capcount == 0){
            return 1;
        }
        else if(onlyfirst == 1){
            return 1;
        }
        else{
            return 0;
        }
    }
};
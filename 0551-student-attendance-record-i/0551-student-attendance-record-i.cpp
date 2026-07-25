class Solution {
public:
    bool checkRecord(string s) {
        int acount = 0, lcountc = 0, maxlcount = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                acount++;
            }
            if(s[i] == 'L'){
                lcountc++;
                maxlcount = max(maxlcount, lcountc);
            }
            else{
                lcountc = 0;
            }
            
        }
        if((acount < 2) && (maxlcount < 3)){
            return 1;
        }
        else{
            return 0;
        }
    }
};
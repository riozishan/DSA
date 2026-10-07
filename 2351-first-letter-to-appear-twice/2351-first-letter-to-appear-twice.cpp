class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> seen(26, false);
        char found;
        for(int i = 0; i<s.length(); i++){
            if(seen[s[i]- 'a']==false){
                seen[s[i]- 'a']=true;
            }
            else{
                found =  s[i];
                break;
            }
        }
        return found;

    }
};
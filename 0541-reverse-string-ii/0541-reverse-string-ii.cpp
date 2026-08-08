class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.length()==1){
            return s;
        }
        for(int i = 0; i< s.length(); i+=(2*k)){
            int j = i;
            int l = min((i+k),(int)s.length())-1;
            while(j<l){
                swap(s[j], s[l]);
                j++;
                l--;
            }
            
        }
        return s;
    }
};
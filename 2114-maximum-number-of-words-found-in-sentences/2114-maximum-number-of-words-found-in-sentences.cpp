class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxs;
        for(int i = 0;i<sentences.size(); i++){
            int sp=1;
            for(int j = 0; j<sentences[i].length(); j++){
                if(sentences[i][j]==' '){
                    sp++;
                    maxs = max(maxs, sp);
                }
            }
        }
        return maxs;
    }
};
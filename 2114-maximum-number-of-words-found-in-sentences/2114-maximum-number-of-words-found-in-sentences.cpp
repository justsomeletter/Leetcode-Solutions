class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxx = -1,count;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' ') count++;
            }
            maxx=max(count,maxx);
        }
        return maxx+1;
    }
};
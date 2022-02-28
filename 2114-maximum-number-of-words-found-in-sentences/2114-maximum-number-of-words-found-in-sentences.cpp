class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxx = -1,num;
        for(int i=0;i<n;i++){
            num = count(sentences[i].begin(),sentences[i].end(),' ');
            maxx=max(num,maxx);
        }
        return maxx+1;
    }
};
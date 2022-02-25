class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int same=0;
        int freqJ[100]={0};
        int freqS[100]={0};
        for(int i=0;i<jewels.size();i++){
            freqJ[jewels[i]-65]++;
        }
        for(int i=0;i<stones.size();i++){
            freqS[stones[i]-65]++;
        }
        for(int i=0;i<=90;i++){
            if(freqJ[i]!=0) same += freqS[i];
        }
        return same;
    }
};
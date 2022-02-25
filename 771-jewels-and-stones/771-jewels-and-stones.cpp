class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int same=0;
        int jk=jewels.size();
        int s = stones.size();
        
        for(int i=0;i<jk;i++){
            for(int j=0;j<s;j++){
                if(jewels[i] == stones[j]) same++;
            }
        }
        return same;
    }
};
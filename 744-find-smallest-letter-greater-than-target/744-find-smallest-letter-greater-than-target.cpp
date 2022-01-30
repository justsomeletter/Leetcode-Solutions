class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    //     int s=0,e = letters.size()-1;
    //     while(s<=e){
    //         int m= (s+e)/2;
    //         if(letters[m]>target) e=m-1;
    //         else s = m+1;
    //     }
    //     //When start & end meets that the point we are talking about
    //     return letters[s%letters.size()];
    // }
        int size = letters.size();
        for(int i=0;i<size;i++)
            if(letters[i] > target)
                return letters[i];
        return letters[0];
    }
};
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans;
        int count=0;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                    if(boxes[j] == '1'){
                       count += abs(i-j);
                    }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
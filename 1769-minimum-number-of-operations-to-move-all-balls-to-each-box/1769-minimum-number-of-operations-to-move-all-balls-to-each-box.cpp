class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans(n);
        int ahead=0,behind=0;
        for(int i=0;i<n;i++){
            if(boxes[i] == '1'){
                ans[0] += i;
                ahead++;
            }
            
        }
        
        if(boxes[0] == '1'){
            ahead--;
            behind++;
        }
        for(int i=1;i<n;i++){
            int temp;
            ans[i] +=ans[i-1]-ahead+behind;
            if(boxes[i] == '1'){
                ahead--;
                behind++;
            }
        }
        return ans;
    }
};
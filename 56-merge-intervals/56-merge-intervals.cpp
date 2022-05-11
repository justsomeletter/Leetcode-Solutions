class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //base case
        if(intervals.size()<=1) return intervals;
       
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        
        result.push_back(intervals[0]);
        
        for(int i=1;i<intervals.size();i++){
            if(result.back()[1] >= intervals[i][0]) 
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            // if not overlapping 
            else result.push_back(intervals[i]);
        }

        return result;
    }
};
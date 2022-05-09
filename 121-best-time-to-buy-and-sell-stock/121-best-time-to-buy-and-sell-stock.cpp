class Solution {
public:
    int maxProfit(vector<int>& prices) { // most optimised solution i could come up with
        
        int n = prices.size();
        int profit = 0,minPrice = INT_MAX;
                
        for(int i=0;i<n;i++){
            minPrice = min(minPrice,prices[i]);
            profit = max(profit,prices[i] - minPrice);
        }
        return profit;
    }
};
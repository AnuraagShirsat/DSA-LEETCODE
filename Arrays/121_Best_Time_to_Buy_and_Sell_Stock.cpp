class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        int currentProfit;

        for(int i = 1; i<prices.size(); i++){
            minPrice = min(prices[i], minPrice);
            
            currentProfit = prices[i] - minPrice;

            maxProfit = max(currentProfit, maxProfit);
            
        }

        return maxProfit;
    }
};

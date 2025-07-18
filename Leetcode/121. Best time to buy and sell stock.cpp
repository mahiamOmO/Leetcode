//leetcode Problem -> 121. Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0; 
        int bestBuy = prices[0];

        for(int i = 1; i < prices.size(); i++) {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
            bestBuy = min(bestBuy, prices[i]);
        }

        return maxProfit;
    }
};

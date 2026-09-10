class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i = 1; i<prices.size(); i++){
            int cost = prices[i] - minPrice;
            maxProfit = max(cost, maxProfit);
            minPrice = min(prices[i], minPrice);
        }
    return maxProfit;
    }
};
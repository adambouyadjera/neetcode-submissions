class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy = prices[0];
        int maxP = 0;
        for(int sell : prices)
        {
            maxP = max(maxP , sell - minbuy);
            minbuy = min(minbuy , sell);
        }
        return maxP;
    }
};

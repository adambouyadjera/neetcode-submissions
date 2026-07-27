class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0];
        int maxP = 0;
        for(int& sell : prices)
        {
            minP = min(minP , sell);
            maxP = max(maxP , sell - minP);
        }
        return maxP;
    }
};

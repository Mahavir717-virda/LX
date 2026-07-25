class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), profit = 0,minp = prices[0];

        for(int i = 1; i < n; i++)
        {
            minp = min(minp,prices[i]);
            profit = max(profit,prices[i] - minp);
        }

        return profit;
    }
};
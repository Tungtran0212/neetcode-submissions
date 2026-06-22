class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy =0;
        int sell = buy+1;
        int n = prices.size();
        while(sell < n)
        {
            while(sell < n && prices[sell] > prices[buy])
            {
                int maxProfit = prices[sell] - prices[buy];
                profit = max(profit, maxProfit);
                sell++;
            }
            buy++;
            sell = buy+1;
        }
        return profit;
    }
};

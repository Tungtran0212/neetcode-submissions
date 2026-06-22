class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int left = 0;
        int right = left+1;
        int n = prices.size();    
        while(right < n)
        {
            if(prices[right] > prices[left])
            {
                int profit;
                profit = prices[right] - prices[left];
                result = max(profit, result);
                cout<<profit;
            }    
            else{
                left=right;
            }
            right=right+1;
        }
        return result;
    }
};

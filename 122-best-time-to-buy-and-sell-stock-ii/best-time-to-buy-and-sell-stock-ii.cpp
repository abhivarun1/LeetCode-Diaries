class Solution {
public:
    int f(int index, int buy, int size,vector<int>& prices, vector<vector<int>>& dp){
        if(index == size) return 0;
        if(dp[index][buy] != -1) return dp[index][buy];
        int profit = 0;
        if(buy){
            profit = max(f(index+1,0,size,prices,dp) - prices[index],f(index+1,1,size,prices,dp));
        } else {
            profit = max(f(index+1,1,size,prices,dp) + prices[index], f(index+1,0,size,prices,dp));
        }
        return dp[index][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(), vector<int>(2,-1));
        return f(0,1,prices.size(),prices,dp);
    }
};
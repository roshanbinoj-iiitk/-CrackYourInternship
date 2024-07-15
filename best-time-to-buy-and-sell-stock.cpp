class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector <int> dp(n+1,0);
        int mn = prices[0];
        for(int i=1;i<=n;i++)
        {
            dp[i] = max(prices[i]-mn,dp[i-1]);
            mn = min(mn,prices[i]);
        }
        return dp[n];
    }
};
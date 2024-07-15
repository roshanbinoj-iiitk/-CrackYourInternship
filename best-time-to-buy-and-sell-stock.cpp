class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector <int> dp(n+1,0);
        int mn = prices[0];
        for(int i=1;i<=n;i++)
        {   mn = min(mn,prices[i-1]);
            dp[i] = max(prices[i-1]-mn,dp[i-1]);
        }
        return dp[n];
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> p(n - 1);
        for (int i = 0; i < n - 1; i++) {
            p[i] = prices[i + 1] - prices[i];
        }
        int pmax = 0;
        for (int i = 0; i < n - 1; i++) {
            if (p[i] > 0)
                pmax += p[i];
        }
        return pmax;
    }
};
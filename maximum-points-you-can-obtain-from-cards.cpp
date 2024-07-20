class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0;
        for (int i = 0; i < k; i++)
            lsum += cardPoints[i];
        int rsum = 0;
        int maxs = lsum;
        for (int lin = k - 1, rin = n - 1; lin >= 0; lin--, rin--) {
            lsum -= cardPoints[lin];
            rsum += cardPoints[rin];
            maxs = max(maxs, lsum + rsum);
        }
        return maxs;
    }
};
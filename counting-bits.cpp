class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp;
        for (int i = 0; i <= n; i++) {
            int sum = 0;
            int num = i;
            while (num != 0) {
                sum += num % 2;
                num = num / 2;
            }
            dp.push_back(sum);
        }
        return dp;
    }
};
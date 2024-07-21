class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> order;
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans;
        int ne = m * n;
        int count = 0;

        int xi = 0, yi = 0, xf = m - 1, yf = n - 1;

        while (count < ne) {
            for (int i = yi; count < ne && i <= yf; i++) {
                ans.push_back(matrix[xi][i]);
                count++;
            }
            xi++;

            for (int i = xi; count < ne && i <= xf; i++) {
                ans.push_back(matrix[i][yf]);
                count++;
            }
            yf--;

            for (int i = yf; count < ne && i >= yi; i--) {
                ans.push_back(matrix[xf][i]);
                count++;
            }
            xf--;

            for (int i = xf; count < ne && i >= xi; i--) {
                ans.push_back(matrix[i][yi]);
                count++;
            }
            yi++;
        }
        return ans;
    }
};
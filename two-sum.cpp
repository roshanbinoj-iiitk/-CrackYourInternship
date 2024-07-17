class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        pair<int, int> a[n];
        for (int i = 0; i < n; i++) {
            a[i].first = nums[i];
            a[i].second = i;
        }
        sort(a, a + n);
        bool flag = false;
        int l = 0, r = n - 1;
        vector <int> ans;
        while (l < r) {
            if (a[l].first + a[r].first == target) {
                ans.push_back(a[l].second);
                ans.push_back(a[r].second);
                break;
            }
            else if (a[l].first + a[r].first > target) {
                r--;
            } else {
                l++;
            }
        }
        return ans;
    }
};
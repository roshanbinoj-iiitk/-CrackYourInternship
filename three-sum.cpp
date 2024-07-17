class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        set<vector<int>> ansSet;
        vector<vector<int>> ans;

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int l = i + 1, r = n - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    ansSet.insert({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                } 
                else if (sum < 0) {
                    l++;
                } 
                else {
                    r--;
                }
            }
        }

        for (auto triplet : ansSet) {
            ans.push_back(triplet);
        }

        return ans;
    }
};
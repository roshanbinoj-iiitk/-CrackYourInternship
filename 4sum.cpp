class Solution {
    typedef long long int ll;
public:
    vector<vector<int>> fourSum(vector<int>& nums, ll target) {
        ll n = nums.size();
        sort(nums.begin(), nums.end());

        set<vector<int>> ansSet;
        vector<vector<int>> ans;

        for (ll i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (ll j = i + 1; j < n - 2; j++) {
                // if (j > i + 1 && nums[j] == nums[j - 1])
                //     continue;
                ll l = j + 1, r = n - 1;
                while (l < r) {
                    ll sum = (ll)nums[i] + (ll)nums[j] + (ll)nums[l] + (ll)nums[r]; 
                    if (sum == target) {
                        ansSet.insert({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                    } else if (sum < target) {
                        l++;
                    } else {
                        r--;
                    }
                }
            }
        }

        for (auto quad : ansSet) {
            ans.push_back(quad);
        }

        return ans;
    }
};

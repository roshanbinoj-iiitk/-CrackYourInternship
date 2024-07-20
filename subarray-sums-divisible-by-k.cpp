class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(n);
        unordered_map <int,int> mp;
        int ans=0;
        int pSum = 0;
        mp[0] = 1;

        for(int i=0;i<n;i++)
        {
            pSum += nums[i];

            int mod = pSum % k;

            if(mod < 0)
                mod+=k;

            if(mp.find(mod) != mp.end()) {
                ans += mp[mod];
                mp[mod]++;
            }
            else{
                mp[mod] = 1;
            }
        }
        return ans;
    }
};
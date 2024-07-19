class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> cnt(100001,0);
        int n = nums.size();
        vector <int> dup;
        for(int i=0;i<n;i++)
        {
            cnt[nums[i]]++;
        }
        for(int i=0;i<100001;i++)
        {
            if(cnt[i]>1)
                dup.push_back(i);
        }
        return dup;
    }
};
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int s = nums.size();
        sort(nums.begin(),nums.end());
        int maxpdt = max(nums[s-1]*nums[s-2]*nums[s-3],nums[s-1]*nums[0]*nums[1]);
        return maxpdt;
    }
};
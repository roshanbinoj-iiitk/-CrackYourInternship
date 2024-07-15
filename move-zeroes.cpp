class Solution {
public:
    // Slower solution
    // void moveZeroes(vector<int>& nums) {
    //     int n = nums.size();
    //     for (int j = 0; j < n - 1; j++) {
    //         for (int i = j+1; i < n; i++) {
    //             if (nums[i] != 0 && nums[j] == 0) {
    //                 int temp = nums[i];
    //                 nums[i] = nums[j];
    //                 nums[j] = temp;
    //             }
    //         }
    //     }
    // }
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j=0;
        for (int i = 0; i < n; i++) {
            if(nums[i]!=0)
            {
                swap(nums[j],nums[i]);
                j++;
            }
        }
    }
};
class Solution {
public:
    /* Solution 1 - High runtime*/
    // int removeDuplicates(vector<int>& nums) {
    //     int n = nums.size();
    //     for(int i=0;i<n-1;)
    //     {
    //         if(nums[i]==nums[i+1])
    //         {   nums.erase(nums.begin()+i);
    //             n--;
    //         }
    //         else
    //         {
    //             i++;
    //         }
    //     }
    //     return int(nums.size());
    // }
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int c = 1;
        int j = 1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            {   nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};
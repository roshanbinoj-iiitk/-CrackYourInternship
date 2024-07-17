class Solution {
public:
    // Slower soln
    // void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     vector<int> nums(n + m);
    //     int j = 0, k = 0, i=0;
    //     while (j < m && k < n) {
    //         if (nums1[j] > nums2[k]) {
    //             nums[i++] = nums2[k];
    //             k++;
    //         } else {
    //             nums[i++] = nums1[j];
    //             j++;
    //         }
    //     }
    //     while (j < m) {
    //         nums[i++] = nums1[j];
    //         j++;
    //     }
    //     while (k < n) {
    //         nums[i++] = nums2[k];
    //         k++;
    //     }

    //     for (int i = 0; i < m + n; i++) {
    //         nums1[i] = nums[i];
    //     }
    // }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = m - 1, k = n - 1, i = m + n - 1;
        while (k >= 0) {
            if (j >= 0 && nums1[j] > nums2[k]) {
                nums1[i--] = nums1[j--];
            } else {
                nums1[i--] = nums2[k--];
            }
        }
    }
};
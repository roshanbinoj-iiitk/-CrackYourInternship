class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(3,0);
        for(int i=0;i<n;i++)
            freq[nums[i]]++;
        int k=0;
        for(int i=0;i<=2;)
        {
            if(freq[i]!=0)
            {   nums[k++]=i;
                freq[i]--;
            } 
            else
            {
                i++;
            }  
        }
    }
};
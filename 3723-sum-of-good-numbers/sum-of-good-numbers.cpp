class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        // hi
        int sum=0;
        int n=nums.size();
        if(nums[0]>nums[0+k]) sum+=nums[0];
        if(nums[n-1]>nums[n-1-k]) sum+=nums[n-1];
        int i=1;
        while(i<n-1)
        {
            if(i-k>=0 && i+k<=n-1)
            {
                if(nums[i-k]< nums[i] && nums[i]>nums[i+k])
                {
                    sum+=nums[i];
                }
            }
            else if(i-k<0 && i+k>n-1)
            {
                sum+=nums[i];
            }
            else if(i-k>=0)
            {
                if(nums[i]>nums[i-k]) sum+=nums[i];
            }
            else if(i+k<=n-1)
            {
                if(nums[i+k]<nums[i]) sum+=nums[i];
            }
            i++;
        }
        return sum;
    }
};
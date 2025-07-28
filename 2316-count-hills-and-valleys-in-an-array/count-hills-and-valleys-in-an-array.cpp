class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size()-1;i++)
        {
            int left=i-1;
            int right=i+1;
            while(left>=0 && right<=nums.size()-1)
            {
                if((nums[left]<nums[i] && nums[right]<nums[i]) || (nums[left]>nums[i] && nums[right]>nums[i]))
                {
                    ans++;
                    break;
                }
                else if(nums[left]==nums[i]) break;
                else if(nums[right]==nums[i]) right++;
                else if(nums[left]<nums[i] && nums[right]>nums[i]) break;
                else if(nums[left]>nums[i] && nums[right]<nums[i]) break;
            }
        }
        return ans;
    }
};
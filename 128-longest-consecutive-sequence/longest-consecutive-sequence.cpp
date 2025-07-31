class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=1;
        int cnt=1;
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1) cnt++;
            else if(nums[i]>nums[i-1]+1) cnt=1;
            else continue;
            ans=max(ans,cnt);
        }
        return ans;
    }
};
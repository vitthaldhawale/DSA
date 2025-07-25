class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> map;
        int sum1=0;
        int sum2=0;
        bool isnegative = true;
        int small = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans.push_back(nums[i]);
                isnegative = false;
            }
            else if(nums[i]>=small)
            {
                small=nums[i];
            }
        }

        if(isnegative)
        {
            return small;
        }

        for(int j=0;j<ans.size();j++)
        {
            map[ans[j]]++;
        }
        for(int r=0;r<ans.size();r++)
        {
            if(map[ans[r]]==1)
            {
                sum1+=ans[r];
            }
            else if(map[ans[r]]>1)
            {
                map[ans[r]]=0;
                sum1+=ans[r];
            }        
        }
        return sum1;
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        vector<int> ans;
        int i=0;
        int j=0;
        int cnt=0;
        while(j<n)
        {
            if(nums[i]==nums[j])
            {
                cnt++;
                j++;
                if(cnt<=2)
                {
                    ans.push_back(nums[i]);
                }
            }
            else
            {
                i=j;
                cnt=0;
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            nums[i]=ans[i];
        }
        return ans.size();

    }
};
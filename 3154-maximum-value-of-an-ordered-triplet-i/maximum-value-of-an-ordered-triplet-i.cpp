class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long ans=INT_MIN;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                long long A1=nums[i]-nums[j];
                for(int k=j+1;k<n;k++)
                {
                    long long A2=A1*nums[k];
                    ans=max(ans,A2);
                }
            }
        }
        if(ans<0) return 0;
        return ans;
    }
};
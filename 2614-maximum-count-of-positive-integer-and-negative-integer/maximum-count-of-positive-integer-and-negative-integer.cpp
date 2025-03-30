class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(nums[mid]>=0) e=mid-1;
            else s=mid+1;     
        }
        int n1=e+1;
         s=e+1;
        e=n-1;
        while(s<=e)
        {
           int mid=(s+e)/2;
            if(nums[mid]>0) e=mid-1;
            else s=mid+1;
        }
        int n2=e+1;
        int ans=max(n1,(n-n2));
        return ans;
    }
};
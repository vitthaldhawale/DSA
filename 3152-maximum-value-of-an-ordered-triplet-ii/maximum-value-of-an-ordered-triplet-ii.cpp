class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long ans=INT_MIN;
        vector<int> right_max(n);
        vector<int> left_max(n);
        int jyada=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            jyada=max(jyada,nums[i]);
            right_max[i]=jyada;
        }
        jyada=INT_MIN;
        for(int i=0;i<n;i++)
        {
            jyada=max(jyada,nums[i]);
            left_max[i]=jyada;
        }
        for(int i=1;i<n-1;i++)
        {
            long long n1=left_max[i-1];
            long long n2=right_max[i+1];

            ans=max(ans,((n1-nums[i])*n2));
        }
        if(ans<0) return 0;
        return ans;
    }
};
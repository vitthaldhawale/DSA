class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> prefix_sum(n+1);
        prefix_sum[0]=0;
        int k=1;
        for(int i=0;i<n;i++)
        {
            prefix_sum[k++]=prefix_sum[i]+gain[i];
        }
        int ans=INT_MIN;
        for(int i=0;i<n+1;i++)
        {
            ans=max(ans,prefix_sum[i]);
        }
        return ans;
    }
};
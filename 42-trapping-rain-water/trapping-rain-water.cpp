class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        vector<int> prefix_max(n);
        vector<int> suffix_max(n);
        prefix_max[0]=height[0];
        suffix_max[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            prefix_max[i]=max(height[i],prefix_max[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            suffix_max[i]=max(height[i],suffix_max[i+1]);
        }
        int v=0;
        while(v<n)
        {
            if(height[v]<prefix_max[v] && height[v]<suffix_max[v])
            {
                int leftmax=prefix_max[v];
                int rightmax=suffix_max[v];
                ans+=min(leftmax,rightmax)-height[v];
            }
            v++;
        }
        return ans;
    }
};
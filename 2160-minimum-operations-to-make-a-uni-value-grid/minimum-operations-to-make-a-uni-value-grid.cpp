class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> ele;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(abs(grid[i][j]-grid[0][0])%x!=0) return -1;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ele.push_back(grid[i][j]);
            }
        }
        sort(ele.begin(),ele.end());
        int mid=ele.size()/2;
        int target=ele[mid];
        int ans=0;
        for(int i=0;i<ele.size();i++)
        {
            ans+=abs(ele[i]-target)/x;
        }
        return ans;
    }
};
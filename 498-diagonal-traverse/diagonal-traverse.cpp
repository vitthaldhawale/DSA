class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();
        ans.reserve(m*n);
        bool flag = true;
        int i=0,j=0;
        for(int k=0;k<m*n;k++)
        {
            ans.push_back(mat[i][j]);
            if(flag==true)
            {
                if(j==n-1)
                {
                    i++;
                    flag = false;
                }
                else if(i==0)
                {
                    j++;
                    flag = false;
                }
                else
                {
                    i--;
                    j++;
                }
            }
            else
            {
                if(i==m-1)
                {
                    j++;
                    flag = true;
                }
                else if(j==0)
                {
                    i++;
                    flag = true;
                }
                else
                {
                    i++;
                    j--;
                }
            }
        }
        return ans;
    }
};
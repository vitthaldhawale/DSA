class Solution {
public:

    int maxnum(vector<int> arr)
    {
        int n = arr.size();
        stack<int> st;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            {
                int ele = arr[st.top()];
                st.pop();
                int pse = st.empty()?-1:st.top();
                int nse = i;
                ans = max(ans,ele*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty())
        {
            int ele = arr[st.top()];
            st.pop();
            int pse = st.empty()?-1:st.top();
            int nse = arr.size();
            ans = max(ans,ele*(nse-pse-1));
        }
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0;
        vector<vector<int>> psum(n, vector<int>(m, 0));
        for(int j=0;j<m;j++)
        {
            int sum = 0;
            for(int i=0;i<n;i++)
            {
                int val = matrix[i][j] == '1'?1:0;
                sum+=val;
                if(matrix[i][j]=='0') sum = 0;
                psum[i][j] = sum;
            }
        }
        for(int i=0;i<n;i++)
        {
            ans = max(ans,maxnum(psum[i]));
        }
        return ans;
    }
};
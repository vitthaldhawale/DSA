class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        int n=g.size();
        int m=s.size();
        int i=0;
        int j=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<n && j<m)
        {
           if(s[j]>=g[i])
            {
                ans++;
                i++;
                j++;
            } 
            else j++;
        }
        return ans;
    }
};
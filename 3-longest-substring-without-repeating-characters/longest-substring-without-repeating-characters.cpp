class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> st;
        int n = s.size();
        int ans=0;
        int l=0,r=0;
        int len = 0;
        while(r<n)
        {
          if(st.count(s[r]) && st[s[r]]>=l)
          {
            l = st[s[r]] + 1;
          }
          ans = max(ans,(r-l+1));
          st[s[r]] = r;
          r++;
        }
        return ans;
    }
};
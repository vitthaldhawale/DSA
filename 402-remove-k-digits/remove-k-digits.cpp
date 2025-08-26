class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n = num.size();
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && (st.top())>(num[i]) && k>0)
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        } 
        if(k==n) return "0";
        while(k>0)
        {
            st.pop();
            k--;
        }
        string ans = "";
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        while(ans.size()!=0 && ans.back()=='0') ans.pop_back();
        reverse(ans.begin(),ans.end());
        if(ans.size()==0) return "0";
        return ans;
    }
};
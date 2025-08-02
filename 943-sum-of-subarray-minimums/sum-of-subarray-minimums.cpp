class Solution {
public:
    vector<int> PSE(vector<int> arr)
    {
        int n= arr.size();
        vector<int> pse(n);
        stack<int> st;
        for(int i=0 ; i<n; i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            pse[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        return pse;
    }
    vector<int> NSE(vector<int> arr)
    {
        int n= arr.size();
        vector<int> nse(n);
        stack<int> st;
        for(int i=n-1 ; i>=0; i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            nse[i] = st.empty()?n:st.top();
            st.push(i);
        }
        return nse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> nse = NSE(arr);
        vector<int> pse = PSE(arr);
        int total = 0;
        int mod = (int) (1e9+7);
        for(int i=0;i<n;i++)
        {
            int left = i - pse[i];
            int right = nse[i] - i;
            total = (total + (left*right*1ll*arr[i])%mod)%mod;
        }
        return total;
    }
};
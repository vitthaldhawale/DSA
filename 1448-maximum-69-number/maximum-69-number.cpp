class Solution {
public:
    int maximum69Number (int num) {
        stack<int> st;
        vector<int> arr;
        int n= num;
        while(n>0)
        {
            st.push(n%10);
            n/=10;
        }
        while(!st.empty())
        {
            arr.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==6)
            {
                arr[i]=9;
                break;
            }
        }
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            ans=ans*10+arr[i];
        }
        return ans;
    }
};
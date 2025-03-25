class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        unordered_map<int,int> map;
        stack<int> st;
        for(int i=m-1;i>=0;i--)
        {
            while(!st.empty() && nums2[i]>=st.top())
            {
                st.pop();
            }
            if(st.empty())
            {
                map[nums2[i]]=-1;
            }
            else
            {
                map[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
       for(int num : nums1)
       {
         ans.push_back(map[num]);
       }
        return ans;
    }
};
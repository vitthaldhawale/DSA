class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        vector<int> map;
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && nums[i]>=st.top())
            {
                st.pop();
            }
            if(st.empty()) 
            {
                bool isgreater=false;
                for(int j=0;j<i;j++)
                {
                    if(nums[j]>nums[i])
                    {
                        isgreater=true;
                        map.push_back(nums[j]);
                        st.push(nums[i]);
                        break;
                    }
                }
                if(isgreater==false)
                {
                    map.push_back(-1);
                    st.push(nums[i]);
                } 
            }
            else 
            {
                map.push_back(st.top());
                st.push(nums[i]);
            }
        }
        reverse(map.begin(),map.end());
        return map;
    }
};
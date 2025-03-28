class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int dominant=0;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
          map[nums[i]]++;
        }
        for(const auto& pair : map)
        {
            if(pair.second>ans)
            {
                dominant=pair.first;
            }
            ans=max(ans,pair.second);
        }
        if(ans<=(n/2)) return -1;
        vector<int> arr(n);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            if(st.empty() && nums[i]!=dominant) arr[i]=0;
            else
            {
                if(nums[i]==dominant)
                {
                    arr[i]=1+st.size();
                    st.push(nums[i]);
                }
                else
                {
                    arr[i]=st.size();
                }
            }
        }
        for(int i=0;i<n-1;i++)
        {
            long cnt1=arr[i];
            long cnt2=ans-arr[i];

            long c1=cnt1*2;
            long c2=cnt2*2;
            if(c1>(i+1) && c2>((n-1)-i)) return i;
        }

        return -1;
    }
};
class Solution {
public:
    bool func(unordered_map<int,int> mp)
    {
        for(const auto& pair : mp)
        {
            if(pair.second>=2) return true;
        }
        return false;
    }
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int ans=0;
        for(int i=0;i<n;i+=3)
        {
            if(func(mp)==true)
            {
                if(i+3>=n) return ++ans;
                for(int j=i;j<i+3;j++)
                {
                    mp[nums[j]]--;
                }
            }
            else
            {
                return ans;
            }    
            ans++;
        }
        return ans;
    }
};
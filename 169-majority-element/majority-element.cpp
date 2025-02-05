class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxele=INT_MIN;
        int minele=INT_MAX;
        int n=nums.size();
         if(n==1) return nums[0];
        unordered_map<int,int> hash;
        int i=0;
        while(i<n)
        {
            hash[nums[i]]++;
            i++;
        }
        int ans=INT_MIN;
        int cnt=-1;
       for(auto& pair : hash)
       {
        if(pair.second>cnt)
        {
            cnt=pair.second;
            ans=pair.first;
        }
       }
    return ans;

    }
};
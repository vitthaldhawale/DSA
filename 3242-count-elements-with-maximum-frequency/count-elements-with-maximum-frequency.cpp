class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> map;
        int maxfreq=0;
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
            maxfreq=max(maxfreq,map[nums[i]]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(maxfreq==map[nums[i]])
            {
                ans++;
            }
        }
        return ans;
    }
};
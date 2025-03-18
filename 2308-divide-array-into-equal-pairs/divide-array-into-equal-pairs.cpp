class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        int pairs=nums.size()/2;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            int res=umap[nums[i]];
            umap[nums[i]]=0;
             cnt+=res/2;
        }
        if(cnt==pairs) return true;
        return false;
    }
};
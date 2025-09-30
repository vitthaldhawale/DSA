class Solution {
public:
    vector<int> func(vector<int>& arr)
    {
        vector<int> nums;
        nums.reserve(arr.size()-1);
        for(int i=0;i<arr.size()-1;i++)
        {
            nums.push_back((arr[i]+arr[i+1])%10);
        }
        return nums;
    }

    int triangularSum(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.empty()) return 0;
        while(nums.size()>1)
        {
            nums = func(nums);
        }
        return nums[0];
    }
};
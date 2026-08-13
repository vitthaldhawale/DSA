class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int i=0;
        int l = 0;
        int r = n-1;
    
        int low = 0;
        int up = n-1;
        for(int i=0;i<=up;i++){
            int j = i+1;
            int k = up;
            int rem = target - nums[i];
            while(j<=k){
                int mid = j + (k-j)/2;
                if(nums[mid]==rem) return {i+1,mid+1};
                else if(nums[mid]>rem) k = mid-1;
                else j = mid+1;
            }
        }
        return ans;
    }
};